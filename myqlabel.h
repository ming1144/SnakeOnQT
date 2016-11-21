#ifndef MYQLABEL_H
#define MYQLABEL_H

#include <iostream>
#include <QLabel>
#include <QDebug>
#include <QMouseEvent>

class myQLabel : public QLabel
{
	Q_OBJECT

public:
	myQLabel(QWidget *parent);
	~myQLabel();
protected:
	void mousePressEvent(QMouseEvent *ev) Q_DECL_OVERRIDE;
signals:
	void clicked(const QPoint &p);

private:
	int x, y;
};

#endif // MYQLABEL_H
