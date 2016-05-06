#include <game.h>
#include <QTimer>

Game::Game()
{
    scene = new QGraphicsScene();

    player = new Player();
    player->setRect(0,0,100,100);

    scene->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    player->setPos(width()/2,height() - player->rect().height());

    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);

    show();
}
