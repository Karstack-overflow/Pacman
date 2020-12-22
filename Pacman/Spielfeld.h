#pragma once
// Standard Header
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
// Eigene Header
#include "GameSurface.h"
#include "Game.h"
#include "Wand.h"
#include "G_mP.h"

class Spielfeld{

public:

	/*Um das Spielfeld zu vergrößern muss das Array, int n und die Einlese Funktion verändert werden, sowie die Textdatei im qrc Ordner !!!!
	  state 1 = Gehweg mit Punkt
	  state 2 = Gehweg ohne Punkt
	  state 3 = Gehweh mit Frucht
	  state 4 = Gehweg mit GeisterPunkt
	  state 5 = Wand
	  state 6 = Teleporter
	*/

	Spielfeld();

	void Spielfeld::placeGamesurface();
	GameSurface* surface;
	Wand* wand;
	G_mP* g_mP;
	int n = 15;			// Spielfledgröße 5x5
	int i = 0;			// Zeilenzähler
	int j = 0;			// Spaltenzähler
	int xPos = 50;		// x Position wo der 1. Spielfeldstein gesetzt wird
	int yPos = 50;		// y Position wo der 1. Spielfeldstein gesetzt wird
	int board[15][15];	// Array muss auf Spielfeldgröße Angepasst werden [Zeilen] [Spalten]
	
};