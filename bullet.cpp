#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <enemy.h>
#include <typeinfo>

Bullet::Bullet()
{
    setRect(0,10,10,50);
    QTimer * timer = new QTimer();
    connect (timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(100);
}

void Bullet::move()
{
    //if bullet collide with item
    QList<QGraphicsItem *> colliding_Items = collidingItems();
    for(int i = 0,n = colliding_Items.size();i<n;++i){
        if(typeid(*(colliding_Items[i])) == typeid(Enemy)){
            //remove both
            scene()->removeItem(colliding_Items[i]);
            scene()->removeItem(this);
            //delete object on the heap
            delete colliding_Items[i];
            delete this;
            return;
        }
    }

    //move bullet up
    setPos(x(),y()-10);
    if(pos().y() + rect().height() <0){
        scene()->removeItem(this);
        delete this;
    }
}


