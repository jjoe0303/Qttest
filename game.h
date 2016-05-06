#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QWidget>
#include <player.h>

class Game:public QGraphicsView{
public:
    Game();
    QGraphicsScene * scene;
    Player * player;
};

#endif // GAME_H
