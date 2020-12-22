#include "GameSurface.h"

GameSurface::GameSurface(int state, QGraphicsRectItem* parent): QGraphicsRectItem(parent){
	status(state);
}

void GameSurface::status(int state)
{
	if (state == 1) {						// Gehweg mit Punkt
		QBrush brush;
		brush.setStyle(Qt::SolidPattern);
		brush.setColor(Qt::magenta);
		setBrush(brush);
	}
	else if (state == 2) {					// Gehweg ohne Punkt
		QBrush brush;
		brush.setStyle(Qt::SolidPattern);
		brush.setColor(Qt::yellow);
		setBrush(brush);
	}
	else if (state == 3) {					// Gehweg mit Frucht
		QBrush brush;
		brush.setStyle(Qt::SolidPattern);
		brush.setColor(Qt::green);
		setBrush(brush);
	}
	else if (state == 4) {					// Gehweg mit Geisterpunkt
		QBrush brush;
		brush.setStyle(Qt::SolidPattern);
		brush.setColor(Qt::blue);
		setBrush(brush);
	}
	else if (state == 5) {					//Wand
		QBrush brush;
		brush.setStyle(Qt::SolidPattern);
		brush.setColor(Qt::red);
		setBrush(brush);
	}
	else if (state == 6) {					//Teleporter
		QBrush brush;
		brush.setStyle(Qt::SolidPattern);
		brush.setColor(Qt::black);
		setBrush(brush);
	}

}
