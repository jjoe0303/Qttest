#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    //initialize
    score = 0;
    setPos(615,0);
    setPlainText(QString("score:")+QString::number(score)); // set score 0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",32 ));
}

void Score::increase()
{
    score++;
    setPlainText(QString("score:")+QString::number(score)); // set score increase
}

int Score::getScore()
{
    return score;
}
