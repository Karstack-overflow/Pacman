#pragma once
#include <QGraphicsRectItem>
#include <QBrush>
#include <QGraphicsTextItem>

class Button :public QObject, public QGraphicsRectItem {
	Q_OBJECT

public:
	//Konstruktor
	Button(QString name, QGraphicsItem* parent = NULL);

	//Öffentliche Methoden
	void mousePressEvent(QGraphicsSceneMouseEvent* event);
	void hoverEnterEvent(QGraphicsSceneHoverEvent* event);
	void hoverLeaveEvent(QGraphicsSceneHoverEvent* event);

signals:
	void clicked();

private:
	QGraphicsTextItem* text;

};