#include "snakeonqt.h"

SnakeOnQT::SnakeOnQT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.Image, SIGNAL(clicked(const QPoint &)), this, SLOT(on_label_clicked(const QPoint &)));
}

SnakeOnQT::~SnakeOnQT()
{

}

void SnakeOnQT::on_actionOpenFile_triggered()
{
	filename = QFileDialog::getOpenFileName(this, tr("Open  File"), "/", "(*.tif)");
	if (filename.isEmpty())
	{
		return;
	}

	QByteArray byteArray = filename.toLatin1();
	const char *c_str = byteArray.data();
	CString cString = c_str;
	image.Load(cString, CXIMAGE_FORMAT_PNG);

	BYTE *buffer = NULL;
	long len = 0;
	image.Encode(buffer, len, CXIMAGE_FORMAT_TIF);

	CxImage dst(buffer, len, CXIMAGE_FORMAT_TIF);

	QImage Qimage(dst.GetBits(), dst.GetWidth(), dst.GetHeight(), QImage::Format_RGB888);
	origin = Qimage.rgbSwapped().mirrored();
	map = QPixmap::fromImage(origin);
	ui.Image->setPixmap(map);
}

void SnakeOnQT::appOpen()
{
	on_actionOpenFile_triggered(); 
}

void SnakeOnQT::on_actionDoSnake_triggered()
{
	snake.Initialization(&image);
	snake.loop(pointList);
	map = QPixmap::fromImage(origin);
	QPainter paint(&map);
	paint.setPen(*new QColor(255, 0, 0));
	QPoint temp1, temp2;
	for (int i = 1; i < pointList.size(); i++)
	{
		temp1 = QPoint(pointList[i - 1].x, pointList[i - 1].y);
		temp2 = QPoint(pointList[i    ].x, pointList[i    ].y);
		paint.drawLine(QLine(temp1, temp2));
	}
	ui.Image->setPixmap(map);
}

void SnakeOnQT::on_actionClearSnake_triggered()
{
	pointList.clear();
	map = QPixmap::fromImage(origin);
	ui.Image->setPixmap(map);
}

void SnakeOnQT::on_label_clicked(const QPoint &p)
{
	QPainter paint(&map);
	paint.setPen(*new QColor(255, 0, 0));
	if (pointList.empty() )
	{
		paint.drawPoint(p);
	}
	else
	{
		int tempX = pointList[pointList.size() - 1].x;
		int tempY = pointList[pointList.size() - 1].y;
		QPoint temp(tempX, tempY);
		paint.drawLine(QLine(temp,p));
	}
	POINT temp;
	temp.x = p.x();
	temp.y = p.y();
	pointList.push_back(temp);
	ui.Image->setPixmap(map);
}



