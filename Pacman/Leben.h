#pragma once
#include <Qstring>
#include <QFont>
#include <QGraphicsTextItem>

class Leben : public QGraphicsTextItem{
public:
	Leben(QGraphicsItem* parent = 0);
	void erniedriegen();
	int getLeben();

private:
	int leben;
};

