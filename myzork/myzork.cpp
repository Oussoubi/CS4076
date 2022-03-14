#include "myzork.h"
#include "ui_myzork.h"

int main()
{

}

void MyZork::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i;

    a = new Room("a");
        //a->addItem(new Item("x", 1, 11));
        //a->addItem(new Item("y", 2, 22));
    b = new Room("b");
        //b->addItem(new Item("xx", 3, 33));
        //b->addItem(new Item("yy", 4, 44));
    c = new Room("c");
    d = new Room("d");
    e = new Room("e");
    f = new Room("f");
    g = new Room("g");
//             (N, E, S, W)
    a->setExits(b, NULL, NULL, d);
    b->setExits(NULL, c, a, NULL);
    c->setExits(e, b, d, NULL);
    d->setExits(c, a, NULL, NULL);
    e->setExits(NULL, NULL, c, f);
    f->setExits(NULL, e, h, g);
    g->setExits(NULL, f, NULL, NULL);

    currentRoom = a;
}

