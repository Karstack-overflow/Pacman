#include "Score.h"

Score::Score(QGraphicsItem* parent): QGraphicsTextItem(parent) {
	// Punktzahl initialisieren
	score = 0;

	// Textausgabe
	setPlainText(QString("Score: ") + QString::number(score));
	setDefaultTextColor(Qt::blue);
	setFont(QFont("times", 16));
}

void Score::erhoeen(int p) {
	score+=p;
	setPlainText(QString("Score: ") + QString::number(score));
}

int Score::getScore() {
	return score;
}