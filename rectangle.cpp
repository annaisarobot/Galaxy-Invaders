#include "rectangle.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QDebug> //to print mesages to console
#include "bullet.h"

void Rectangle::keyPressEvent(QKeyEvent* event)
{
    //qDebug() << "Rectangle knows that you pressed a key";
    if (event->key() == Qt::Key_Left || event->key() == Qt::Key_A)
    {
        setPos(x()-10,y()); //move 10 to the left
    }
    else if (event->key() == Qt::Key_Right || event->key() == Qt::Key_D)
    {
        setPos(x()+10,y()); //move 10 to the right
    }
    else if (event->key() == Qt::Key_Up || event->key() == Qt::Key_W)
    {
        setPos(x(),y()-10); //move 10 up
    }
    else if (event->key() == Qt::Key_Down || event->key() == Qt::Key_S)
    {
        setPos(x(),y()+10); //move 10 down
    }
    else if (event->key() == Qt::Key_Space)
    {
        //create a bullet
        Bullet* bullet = new Bullet();
        //qDebug() << "bullet created";
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}
