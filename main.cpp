#include "snakeonqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SnakeOnQT w;
	w.show();
	w.resize(500, 500);
	w.appOpen();
	return a.exec();
}
