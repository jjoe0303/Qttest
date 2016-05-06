#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <stdlib.h>

Enemy::Enemy()
{
   //set random position
    int random_num = rand()%700;
    setPos(random_num,0);
    setRect(0,0,100,100);
    QTimer * timer = new QTimer();
    connect (timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void Enemy::move()
{
 //move the enemy down
    setPos(x(),y()+5);
    if(pos().y() + rect().height() <0){
        scene()->removeItem(this);
        delete this;
    }
}
