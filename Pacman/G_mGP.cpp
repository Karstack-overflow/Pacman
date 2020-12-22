#include "G_mGP.h"

G_mGP::G_mGP(QGraphicsRectItem* parent) : QGraphicsRectItem(parent) {

	QBrush brush;
	brush.setStyle(Qt::SolidPattern);
	brush.setColor(Qt::darkMagenta);
	setBrush(brush);

}

