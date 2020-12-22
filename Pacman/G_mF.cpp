#include "G_mF.h"

G_mF::G_mF(QGraphicsRectItem* parent) : QGraphicsRectItem(parent) {

	QBrush brush;
	brush.setStyle(Qt::SolidPattern);
	brush.setColor(Qt::yellow);
	setBrush(brush);

}