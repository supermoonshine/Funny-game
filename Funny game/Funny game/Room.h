#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>
using namespace std;

class Room
{
public:
	virtual void enter() = 0;
};
#endif