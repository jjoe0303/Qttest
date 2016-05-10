#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QObject>
#include <enemy.h>
#include <enemy2.h>
#include <QGraphicsPixmapItem>

class Player:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player();
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
};

#endif // MYRECT_H
