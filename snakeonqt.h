#ifndef SNAKEONQT_H
#define SNAKEONQT_H

#include <vector>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QtWidgets>
#include <QFiledialog>
#include <QDebug>
#include <atlstr.h>
#include "CxImage\ximage.h"
#include "ui_snakeonqt.h"
#include "snakeList.h"

class SnakeOnQT : public QMainWindow 
{
	Q_OBJECT
public:
	SnakeOnQT(QWidget *parent = 0);
	~SnakeOnQT();
	void appOpen();

public slots:
	void on_actionOpenFile_triggered();
	void on_actionDoSnake_triggered();
	void on_actionClearSnake_triggered();
	void on_label_clicked(const QPoint &p);
private:
	Ui::SnakeOnQTClass ui;
	QString filename;
	CxImage image;
	QImage origin;
	QPixmap map;
	vector<POINT> pointList;
	Snake snake;

};

#endif // SNAKEONQT_H
