#include "Pacman.h"

extern Game* game;

Pacman::Pacman(QGraphicsRectItem* parent) : QGraphicsRectItem(parent) {

    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::darkCyan);
    setBrush(brush);

    timer = new QTimer(this);
    timer->setInterval(20);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start();
}

void Pacman::move() {

    // Begrenzung ist noch verbesserungswürdig, da der Player nicht 100% gesteuert werden kann

    QList<QGraphicsItem*> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i) {

        //Kollisionsprüfung mit Wand
        if (typeid(*(colliding_items[i])) == typeid(Wand)) {
            if (r_Player == Left && r_Player == r_lastmove) {
                return;
            }
            if (r_Player == Right && r_Player == r_lastmove) {
                return;
            }
            if (r_Player == Up && r_Player == r_lastmove) {
                return;
            }
            if (r_Player == Down && r_Player == r_lastmove) {
                return;
            }
            if (r_Player != r_lastmove && r_lastmove == Left) {
                setPos(x() + Player_speed, y());
                xPos += 1;
            }
            if (r_Player != r_lastmove && r_lastmove == Right) {
                setPos(x() - Player_speed, y());
                xPos -= 1;
            }
            if (r_Player != r_lastmove && r_lastmove == Up) {
                setPos(x(), y()+ Player_speed);
                yPos += 1;
            }
            if (r_Player != r_lastmove && r_lastmove == Down) {
                setPos(x(), y() - Player_speed);
                yPos -= 1;
            }
        }

        //Kollisionsprüfung mit Gehweg mit Punkt
        if (typeid(*(colliding_items[i])) == typeid(G_mP)) {
            delete colliding_items[i];
            game->score->erhoeen(1);
        }
    }

    if (r_Player == Left) {
        setPos(x() - Player_speed, y());
        xPos -= Player_speed;
        r_lastmove = Left;
    }
    else if (r_Player == Right) {
        setPos(x() + Player_speed, y());
        xPos += Player_speed;
        r_lastmove = Right;
    }
    else if (r_Player == Up) {
        setPos(x(), y() - Player_speed);
        yPos -= Player_speed;
        r_lastmove = Up;
    }
    else if (r_Player == Down) {
        setPos(x(), y() + Player_speed);
        yPos += Player_speed;
        r_lastmove = Down;
    }

}

void Pacman::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Left) {
        r_Player = Left;
    }
    else if (event->key() == Qt::Key_Right) {
        r_Player = Right;
    }
    else if (event->key() == Qt::Key_Up) {
        r_Player = Up;
    }
    else if (event->key() == Qt::Key_Down) {
        r_Player = Down;
    }
}
