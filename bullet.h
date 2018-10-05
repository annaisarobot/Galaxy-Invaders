#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject> //to support signals and slots

class Bullet: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();
public slots:
    void move();
};

#endif // BULLET_H
