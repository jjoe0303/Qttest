#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <stdlib.h>

Enemy::Enemy()
{
    setPos(800,192);
    setPixmap(QPixmap(":/image/blue.png"));
    QTimer * timer = new QTimer();
    connect (timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(100);
}


void Enemy::move()
{
 //move the enemy down
    setPos(x()-20,y());

    if(pos().x() + 70 < 0){
        scene()->removeItem(this);
        delete this;
    }
}
