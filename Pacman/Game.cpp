#include "Game.h"
#include <QDebug>


/*-Alle Fenster müssen noch designt werden
  -Ton könnte man noch hinzufügen wenn Spiel läuft
  -Mehrspieler Modus könnte man noch hinzufügen wenn Spiel läuft*/


Game::Game(QWidget* parent)
{
	// set up the screen
	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setFixedSize(1200, 850);

	scene = new QGraphicsScene();
	scene->setSceneRect(0, 0, 1200, 850);
	setScene(scene);

	displayMainMenu();
}

void Game::displayMainMenu()
{
	//Play Button erstellen
	Button* playButton = new Button(QString("Play"));
	int pxPos = this->width() / 2 - playButton->boundingRect().width() / 2;
	int pyPos = 275;
	connect(playButton, SIGNAL(clicked()),this, SLOT(start()));
	playButton->setPos(pxPos, pyPos);
	scene->addItem(playButton);

	//Highscore Button erstellen
	Button* highscoreButton = new Button(QString("Highscore"));
	int hxPos = this->width() / 2 - highscoreButton->boundingRect().width() / 2;
	int hyPos = 350;
	connect(highscoreButton, SIGNAL(clicked()), this, SLOT(highscore()));
	highscoreButton->setPos(hxPos, hyPos);
	scene->addItem(highscoreButton);

	//Quit Button erstellen
	Button* quitButton = new Button(QString("Quit"));
	int qxPos = this->width() / 2 - quitButton->boundingRect().width() / 2;
	int qyPos = 425;
	connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));
	quitButton->setPos(qxPos, qyPos);
	scene->addItem(quitButton);

}


void Game::start() {

	scene->clear();
	//Szenen Hintergrund auf Schwarz gesetzt
	QBrush brush;
	brush.setStyle(Qt::SolidPattern);
	brush.setColor(Qt::black);
	scene->setBackgroundBrush(brush);

	//Spielfeld aufgebaut über Textdatei
	Spielfeld* Board;
	Board = new Spielfeld();

	//Pacman Position gesetzt und zur Szene hinzugefügt
	Pacman* player;
	player = new Pacman();
	player->setRect(0, 0, 30, 30);
	player->setPos(110, 110);
	player->setFlag(QGraphicsItem::ItemIsFocusable);
	player->setFocus();
	scene->addItem(player);

	//Geist setzen
	Geister* geist = new Geister();
	geist->setRect(0, 0, 30, 30);
	geist->setPos(110, 300);
	scene->addItem(geist);

	//Punktestand & leben hinzugefügt
	score = new Score();
	score->setPos(810,10);
	scene->addItem(score);
	leben = new Leben();
	leben->setPos(810, 40);
	scene->addItem(leben);

	//Quit Button erstellen
	Button* quitButton = new Button(QString("Quit"));
	connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));
	quitButton->setPos(810, 500);
	scene->addItem(quitButton);

	//To-Do
	/*Spieldfeld erstellen:
	  Class Spielfeldblock mit Attributen wie: Gehweg mit Punkt, Gehweg ohne Punkt, Gehweg mit Frucht, Gehweg mit Punkt zum Geisteressen, Wand, Teleporter
	  Class Geister mit verschiedenen Spielmethoden um Pacman zu fressen*/

}

void Game::highscore() {
	scene->clear();
	//Szenen Hintergrund auf Schwarz gesetzt
	QBrush brush;
	brush.setStyle(Qt::SolidPattern);
	brush.setColor(Qt::black);
	scene->setBackgroundBrush(brush);
	
	
	
	
	
	//ifstream datei("Highscore.txt", ios_base::in);
	//vector<int> sc;
	//int n;

	//if (!datei)
	//{
	//	cerr << "Fehler beim oeffnen!";
	//}
	//for (int highscore; datei >> highscore;)
	//{
	//	sc.push_back(highscore);
	//}
	//ofstream dat("Highscore.txt", ios_base::out | ios_base::app);

	//dat << highscore;

	//for (int i = 1; i < sc.size() && i < 10; i++)
	//{
	//	cout << i << ": " << sc[i - 1] << endl;
	//}
}





