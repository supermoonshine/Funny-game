#ifndef LIVINGROOM_H
#define LIVINGROOM_H

#include "Room.h"

#include <iostream>

class LivingRoom : public Room {          //�~��Room
public:
	void enter() override;
	void Menu();
};
#endif