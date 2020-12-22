#include "Leben.h"

Leben::Leben(QGraphicsItem* parent) : QGraphicsTextItem(parent) {
	leben = 3; // Anzahl der Leben

	//Textausgabe
	setPlainText(QString("Leben: ") + QString::number(leben));
	setDefaultTextColor(Qt::red);
	setFont(QFont("times", 16));

}

void Leben::erniedriegen() {
	leben--;
	setPlainText(QString("Leben: ") + QString::number(leben));
}

int Leben::getLeben() {
	return leben;
}