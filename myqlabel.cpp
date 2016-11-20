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
	this->x = ev->x();
	this->y = ev->y();
	
}