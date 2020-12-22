#pragma once

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>
#include <QBrush>
using namespace std;

//Eigene Header Files
#include "Button.h"
#include "Pacman.h"
#include "Geister.h"
#include "GameSurface.h"
#include "Spielfeld.h"
#include "Score.h"
#include "Leben.h"

class Game : public QGraphicsView {
	Q_OBJECT

public:
	//Konstuktor
	Game(QWidget* parent = NULL);
	
	// Öffentliche Attribute
	QGraphicsScene* scene;
	Score* score;
	Leben* leben;

	//Öffentliche Methoden
	void  displayMainMenu();


public slots:

	void start();
	void highscore();
	

};
