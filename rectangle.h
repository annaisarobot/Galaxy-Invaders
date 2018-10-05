#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QGraphicsRectItem> //inheriting from

class Rectangle: public QGraphicsRectItem
{
public:
    //allow Rectangle to respond to keyboard presses
    void keyPressEvent(QKeyEvent* event);
};

#endif // RECTANGLE_H
