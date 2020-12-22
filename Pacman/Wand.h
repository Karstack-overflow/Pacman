#pragma once

#include <QGraphicsRectItem>
#include <QBrush>

class Wand :public QObject, public QGraphicsRectItem {
	Q_OBJECT
public:

	Wand(QGraphicsRectItem* parent = NULL);
	QGraphicsRectItem* rect;
};