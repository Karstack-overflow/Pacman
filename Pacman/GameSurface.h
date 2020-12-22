#pragma once
#include <QGraphicsRectItem>
#include <QBrush>

class GameSurface :public QObject, public QGraphicsRectItem {
	Q_OBJECT

public:
	/*enum status { G_mP, G_oP, G_mF, G_mGP, W, T};
	status state;*/

	GameSurface(int state, QGraphicsRectItem* parent = NULL);
	QGraphicsRectItem* rect;

	void status(int state);

public slots:

private:

};