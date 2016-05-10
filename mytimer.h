#ifndef MYTIMER_H
#define MYTIMER_H
#include <QGraphicsTextItem>
#include <QObject>
#include <QTimer>

class Mytimer:public QGraphicsTextItem{
    Q_OBJECT
public:
    Mytimer(QGraphicsItem * parent = 0);
    int gettime();
public slots:
    void decrease();
private:
    int time;
};
#endif // MYTIMER_H
