#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    //initialize
    score = 0;
    setPlainText(QString("score:")+QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16 ));
}
