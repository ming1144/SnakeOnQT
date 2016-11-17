#include "snakeonqt.h"

SnakeOnQT::SnakeOnQT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
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
	CxImage Image;
	Image.Load(cString, CXIMAGE_FORMAT_PNG);

	BYTE *buffer = NULL;
	long len = 0;
	Image.Encode(buffer, len, CXIMAGE_FORMAT_TIF);

	CxImage dst(buffer, len, CXIMAGE_FORMAT_TIF);

	QImage Qimage(dst.GetBits(), dst.GetWidth(), dst.GetHeight(), QImage::Format_RGB888);
	origin = Qimage.rgbSwapped().mirrored();
	QPixmap map = QPixmap::fromImage(origin);
	QGraphicsScene* scene = new QGraphicsScene();
	QGraphicsPixmapItem* item = new QGraphicsPixmapItem(map);
	scene->addItem(item);
	ui.Image->setScene(scene);
}

void SnakeOnQT::appOpen()
{
	on_actionOpenFile_triggered(); 
}

void SnakeOnQT::on_actionDoSnake_triggered()
{

}

void SnakeOnQT::on_actionClearSnake_triggered()
{

}



