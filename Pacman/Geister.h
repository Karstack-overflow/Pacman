#pragma once
#include <QGraphicsRectItem>
#include <QBrush>
#include <QTimer>
#include <QKeyEvent>
#include <QDebug>
#include <Windows.h>
#include <Qlist>
#include <stdlib.h>

#include "GameSurface.h"
#include "Wand.h"
#include "G_mP.h"
#include "Game.h"

class Geister : public QObject, public QGraphicsRectItem {

	Q_OBJECT

public:

	Geister(QGraphicsRectItem* parent = NULL);
	QGraphicsRectItem* rect;

	enum richtung { Left, Right, Up, Down};
	richtung r_Geister;
	richtung r_lastmove;

	QTimer* timer;

	int xPos = 500;
	int yPos = 100;
	int Player_speed = 4;


public slots:

	void moveforward();
	void changeDirection();

private:
};