#include "enemy2.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <stdlib.h>

Enemy2::Enemy2()
{
   //set random position
    setPos(800,192);
    setPixmap(QPixmap(":/images/red.png"));
    QTimer * timer = new QTimer();
    connect (timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(100);
}

void Enemy2::move()
{
 //move the enemy down
    setPos(x()-20,y());
    if(pos().x() + 70 < 0){
        scene()->removeItem(this);
        delete this;
    }
}
