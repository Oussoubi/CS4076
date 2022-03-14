#ifndef MYZORK_H
#define MYZORK_H

//#include "Command.h"
#include "Parser.h"
//#include "Room.h"
//#include "item.h"
#include <iostream>
#include <string>
using namespace std;

class MyZork {
private:
    //Parser parser;
    //Room *currentRoom;
    void createRooms();
    void printWelcome();
    //bool processCommand(Command command);
    //void printHelp();
    //void goRoom(Command command);
    //void createItems();
    //void displayItems();

public:
    MyZork();
    void play();
    string go(string direction);
};

#endif // MYZORK_H
