#ifndef MYQLABEL_H
#define MYQLABEL_H

#include <QLabel>
#include <QMouseEvent>

class myQLabel : public QLabel
{
	Q_OBJECT

public:
	myQLabel(QWidget *parent);
	~myQLabel();
public slots:
	void mousePressEvent(QMouseEvent *ev);
signals:
	void mouse_Pressed();

private:
	int x, y;
};

#endif // MYQLABEL_H
