#ifndef BATHROOM_H
#define BATHROOM_H

#include "Room.h"

class BathRoom : public Room {
public:
	void enter() override;
};
#endif