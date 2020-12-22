#include "G_mP.h"

G_mP::G_mP(QGraphicsRectItem* parent) : QGraphicsRectItem(parent) {

	QBrush brush;
	brush.setStyle(Qt::SolidPattern);
	brush.setColor(Qt::magenta);
	setBrush(brush);

}

