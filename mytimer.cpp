#include "mytimer.h"
#include <QFont>

Mytimer::Mytimer(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    //initialize
    time = 30;
    setPos(615,40);
    setPlainText(QString("time:")+QString::number(time)); // set time 30
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",28 ));
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(decrease()));
    timer->start(1000);
}


int Mytimer::gettime()
{
    return time;
}

void Mytimer::decrease()
{
     time--;
     setPlainText(QString("time:")+QString::number(time)); // set time new
}
