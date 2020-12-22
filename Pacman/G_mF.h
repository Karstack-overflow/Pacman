#pragma once
#include <QGraphicsRectItem>
#include <QBrush>

class G_mF :public QObject, public QGraphicsRectItem {
	Q_OBJECT
public:

	G_mF(QGraphicsRectItem* parent = NULL);
	QGraphicsRectItem* rect;
};
