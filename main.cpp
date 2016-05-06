#include <QApplication>
#include <game.h>
#include "player.h"
#include <QTimer>

Game * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();
    game->show();

    return a.exec();
}
