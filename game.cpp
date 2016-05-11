#include <game.h>
#include <QTimer>
#include <QGraphicsPixmapItem>

Game::Game()
{
  //  start = new Start();
    scene = new QGraphicsScene();

    player = new Player();
    scene->addItem(player);

  /*  QGraphicsPixmapItem *drum = new QGraphicsPixmapItem();
    drum->setPixmap(QPixmap(":/images/testdrum2.png"));
    drum->setPos(0,143);
    scene->addItem(drum);*/

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(768,557);

    scene->setSceneRect(0,0,768,557);
    scene->setBackgroundBrush(QBrush(QPixmap(":/image/bgg6.png")));

    //create the score
    score = new Score();
    scene->addItem(score);

    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(1200);

    mytimer = new Mytimer();
    scene->addItem(mytimer);

}
