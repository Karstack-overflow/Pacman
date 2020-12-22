#pragma once
#include <QGraphicsRectItem>
#include <QBrush>

class G_mP :public QObject,public QGraphicsRectItem {
	Q_OBJECT
public:

	G_mP(QGraphicsRectItem* parent = NULL);
	QGraphicsRectItem* rect;
};
