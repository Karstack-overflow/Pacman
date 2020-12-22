#include "Spielfeld.h"
#include <QDebug>


extern Game* game;

Spielfeld::Spielfeld(){

	// Textdatei ausgelesen um Spielfeld zu erstellen
	std::ifstream datei("Testspielfeld.txt");
	std::string zeile;
	int l = 0;
	while (std::getline(datei, zeile)) {

		for (int p = 0; p < zeile.size(); p++)
		{
			if (zeile[p] == ',')
			{
				zeile[p] = ' ';
			}
		}

		std::stringstream zeilenpuffer(zeile);
	for (int s= 0; s<n ; s++){
		zeilenpuffer >> board[l][s];
	}// bei Spielvergrößerung n ändern
		l = l++;
	}

	placeGamesurface();
}

void Spielfeld::placeGamesurface()
{
	for (i; i < n; i++) {

		for (j; j < n; j++) {

			/*surface = new GameSurface(board[i][j]);
			surface->setRect(0, 0, 50, 50);
			surface->setPos(xPos, yPos);
			xPos += 50;
			game->scene->addItem(surface);*/

			if (board[i][j] == 1) {
				g_mP = new G_mP();
				g_mP->setRect(0, 0, 50, 50);
				g_mP->setPos(xPos, yPos);
				xPos += 50;
				game->scene->addItem(g_mP);
			}

			if (board[i][j] == 5) {
				wand = new Wand();
				wand->setRect(0, 0, 50, 50);
				wand->setPos(xPos, yPos);
				xPos += 50;
				game->scene->addItem(wand);
			}
		}
		xPos = 50;
		yPos += 50;
		j = 0;
	}
}
