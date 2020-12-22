#pragma once
#include <Qstring>
#include <QFont>
#include <QGraphicsTextItem>

class Score : public QGraphicsTextItem {
public:
	Score(QGraphicsItem* parent = 0);
	void erhoeen(int);
	int getScore();

private:
	int score;
};