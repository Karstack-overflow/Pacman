#pragma once

#include <QGraphicsRectItem>
#include <QBrush>
#include <QTimer>
#include <QKeyEvent>
#include <QDebug>
#include <Windows.h>
#include <Qlist>

#include "GameSurface.h"
#include "Wand.h"
#include "G_mP.h"
#include "Game.h"

class Pacman : public QObject, public QGraphicsRectItem {

	Q_OBJECT

public:

	Pacman(QGraphicsRectItem* parent = NULL);
	QGraphicsRectItem* rect;

	void Pacman::keyPressEvent(QKeyEvent* event);
	enum richtung { Left, Right, Up, Down };
	richtung r_Player;
	richtung r_lastmove;

	QTimer* timer;

	int xPos = 100;
	int yPos = 100;
	int Player_speed = 5;


public slots:

	void move();

private:
};