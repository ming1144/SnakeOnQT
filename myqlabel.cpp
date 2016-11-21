#include "myqlabel.h"

myQLabel::myQLabel(QWidget *parent)
	: QLabel(parent)
{

}

myQLabel::~myQLabel()
{

}

void myQLabel::mousePressEvent(QMouseEvent *ev)
{
	//QLabel::mousePressEvent(ev);
	emit clicked(ev->pos());
}