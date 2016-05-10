#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QWidget>
#include <player.h>
#include <score.h>
#include <mytimer.h>

class Game:public QGraphicsView{
public:
    Game();
    QGraphicsScene * scene;
    Player * player;
    Score * score;
    Mytimer * time;
};

#endif // GAME_H
