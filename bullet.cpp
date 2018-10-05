#include "bullet.h"
#include <QTimer>

Bullet::Bullet()
{
    //draw the rect for the bullet
    setRect(0,0,10,50);

    //connect the slot
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move())); //connect timeout function of timer to move function

    //every bullet has it's own timer therefore moves independently
    timer->start(50); //timeout happens every 50 ms
}

void Bullet::move()
{
    //move the bullet up
    setPos(x(),y()-10);
}
