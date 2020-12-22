#include "Gamestart.h"
#include <QDebug>


Gamestart::Gamestart(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    scene->clear;

    this->setFixedSize(WINDOWHEIGHT, WINDOWLENGHT);
    this->setWindowTitle("Pacman - Testversion");
    
    

    qDebug("neues Fester entsteht");

}


