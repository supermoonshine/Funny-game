#ifndef BEDROOM_H
#define BEDROOM_H

#include "Room.h"

class BedRoom : public Room {
public:
	void enter() override;
	void sleep();
	void play_games();
};
#endif
