#include <QApplication>
#include <QGraphicsScene> //container to hold graphics items
//#include <QGraphicsRectItem> //QGraphicsItem
#include "rectangle.h"
#include <QGraphicsView> //to print scene

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //create a scene
    QGraphicsScene* scene = new QGraphicsScene();

    //create an item to put into scene
    Rectangle* player = new Rectangle();
    //QGraphicsRectItem* rect = new QGraphicsRectItem(); //default length/width is 0
    player->setRect(0,0,100,100);

    //add item to scene
    scene->addItem(player);

    //make rect focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus(); //so it can receive keyboard events

    //add a view
    QGraphicsView* view = new QGraphicsView(scene);
    //view->setScene(scene);

    //dirty - disable the scroll bars
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //show the view
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    player->setPos(view->width()/2,view->height() - (player->rect().height() + 10));

    return a.exec();
}
