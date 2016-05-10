#include "player.h"
#include "bullet.h"
#include <QGraphicsScene>
#include "enemy.h"
#include "enemy2.h"
#include <QList>
#include <typeinfo>
#include <game.h>

extern Game * game;

Player::Player()
{
    setPixmap(QPixmap(":/images/drum3.png"));
    setPos(20,165);
}

void Player::keyPressEvent(QKeyEvent *event)
{
  /*  if (event->key() == Qt::Key_Left){
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
*/
   /*  if (event->key() == Qt::Key_Space){
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }*/

     if (event->key() == Qt::Key_X || event->key() == Qt::Key_C){
         QList<QGraphicsItem *> colliding_Items = collidingItems();
         for(int i = 0,n = colliding_Items.size();i<n;++i){
             if(typeid(*(colliding_Items[i])) == typeid(Enemy2)){
                 //increase the score
                 game->score->increase();
                 //remove the note
                 scene()->removeItem(colliding_Items[i]);
                 //delete object on the heap
                 delete colliding_Items[i];
                 return;
             }
         }
    }

      else if (event->key() == Qt::Key_Z || event->key() == Qt::Key_V){
          QList<QGraphicsItem *> colliding_Items = collidingItems();
          for(int i = 0,n = colliding_Items.size();i<n;++i){
              if(typeid(*(colliding_Items[i])) == typeid(Enemy)){
                  //increase the score
                  game->score->increase();
                  //remove the note
                  scene()->removeItem(colliding_Items[i]);
                  //delete object on the heap
                  delete colliding_Items[i];
                  return;
              }
          }
     }
}

void Player::spawn()
{
    //to create an enemy
    int random_num = rand()%2;
    if (random_num == 0){
    Enemy *enemy = new Enemy();
    scene()->addItem(enemy);
    }

    if (random_num == 1){
    Enemy2 * enemy2 = new Enemy2();
    scene()->addItem(enemy2);
    }
}
