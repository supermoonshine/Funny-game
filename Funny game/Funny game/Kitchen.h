#ifndef KITCHN_H
#define KITCHN_H

#include "Room.h"

class Kitchen : public Room {
public:
	void enter() override;
	void RG();
};
#endif