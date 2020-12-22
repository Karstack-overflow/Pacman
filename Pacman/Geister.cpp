#include "Geister.h"

extern Game* game;

Geister::Geister(QGraphicsRectItem* parent) : QGraphicsRectItem(parent) {

    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::darkYellow);
    setBrush(brush);

    timer = new QTimer(this);
    timer->setInterval(50);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(moveforward()));
    timer->start(50);
}

void Geister::moveforward() {
    
    QTimer* ctimer;
    ctimer = new QTimer(this);
    ctimer->setInterval(500);
    connect(ctimer, SIGNAL(timeout()), this, SLOT(changeDirection()));
    ctimer->start();

    if (r_Geister == Left) {
        setPos(x() - Player_speed, y());
        xPos -= Player_speed;
        r_lastmove = Left;
    }
    else if (r_Geister == Right) {
        setPos(x() + Player_speed, y());
        xPos += Player_speed;
        r_lastmove = Right;
    }
    else if (r_Geister == Up) {
        setPos(x(), y() - Player_speed);
        yPos -= Player_speed;
        r_lastmove = Up;
    }
    else if (r_Geister == Down) {
        setPos(x(), y() + Player_speed);
        yPos += Player_speed;
        r_lastmove = Down;
    }

    QList<QGraphicsItem*> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i) {
        if (typeid(*(colliding_items[i])) == typeid(Wand)) {
            
            if (r_Geister == Left && r_Geister == r_lastmove)   return;
            if (r_Geister == Right && r_Geister == r_lastmove)  return;
            if (r_Geister == Up && r_Geister == r_lastmove)     return;
            if (r_Geister == Down && r_Geister == r_lastmove)   return;
            if (r_Geister != r_lastmove && r_lastmove == Left) {
                setPos(x() + Player_speed, y());
                xPos += 1; 
            }
            if (r_Geister != r_lastmove && r_lastmove == Right) {
                setPos(x() - Player_speed, y());
                xPos -= 1;
            }
            if (r_Geister != r_lastmove && r_lastmove == Up) {
                setPos(x(), y() + Player_speed);
                yPos += 1; 
            }
            if (r_Geister != r_lastmove && r_lastmove == Down) {
                setPos(x(), y() - Player_speed);
                yPos -= 1;
            }
        }
    }
}

void Geister::changeDirection() {
    int random_number = rand() % 4;
    switch (random_number) {
        case '0': r_Geister = Left;  break;
        case '1': r_Geister = Right; break;
        case '2': r_Geister = Up;    break;
        case '3': r_Geister = Down;  break;
    }
}