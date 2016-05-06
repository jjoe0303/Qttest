#include "player.h"
#include "bullet.h"
#include <QGraphicsScene>
#include "enemy.h"

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
        if(pos().x()>0){
        setPos(x()-30,y());
        }
    }

    else if (event->key() == Qt::Key_Right){
        if(pos().x()+100<800){
        setPos(x()+30,y());
        }
    }

    else if (event->key() == Qt::Key_Up){
        setPos(x(),y()-10);
    }

    else if (event->key() == Qt::Key_Down){
        setPos(x(),y()+10);
    }

    else if (event->key() == Qt::Key_Space){
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}

void Player::spawn()
{
    //to create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
