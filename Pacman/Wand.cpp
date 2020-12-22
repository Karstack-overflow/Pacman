#include "Wand.h"

Wand::Wand(QGraphicsRectItem* parent) : QGraphicsRectItem(parent) {

	QBrush brush;
	brush.setStyle(Qt::SolidPattern);
	brush.setColor(Qt::red);
	setBrush(brush);

}
