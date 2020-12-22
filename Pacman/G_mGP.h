#pragma once
#include <QGraphicsRectItem>
#include <QBrush>

class G_mGP :public QObject, public QGraphicsRectItem {
	Q_OBJECT
public:

	G_mGP(QGraphicsRectItem* parent = NULL);
	QGraphicsRectItem* rect;
};
