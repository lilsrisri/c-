//
// Created by Sriram Subramanian on 11/13/24.
//

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <cstring>
#include "item.h"
#include <vector>
#include "room.h"
using namespace std;


class Room {
public:
    Room(const char* name_arg);
    void setNorth(Room* room);
    void setEast(Room* room);
    void setSouth(Room* room);
    void setWest(Room* room);
private:
    const char* name;
    // vector<int> exits;
    vector<Item*> items;
    Room* north = nullptr;
    Room* east = nullptr;
    Room* south = nullptr;
    Room* west = nullptr;
};


#endif //ROOM_H


