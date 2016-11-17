#ifndef SNAKEONQT_H
#define SNAKEONQT_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QtWidgets>
#include <QFiledialog>
#include <atlstr.h>
#include "CxImage\ximage.h"
#include "ui_snakeonqt.h"

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

private:
	Ui::SnakeOnQTClass ui;
	QString filename;
	QImage origin;
};

#endif // SNAKEONQT_H
