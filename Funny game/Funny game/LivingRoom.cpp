#include "LivingRoom.h"
#include "Kitchen.h"
#include "BathRoom.h"
#include "BedRoom.h"
#include <iostream>

void LivingRoom::enter() {
	cout << "You are in the living room." << endl;
	cout << "But here is boring!" << endl;

	Menu();
}

void LivingRoom::Menu() {
	cout << "Enter an option:" << endl <<
		    "1: Go to ther Kitchen" << endl <<
		    "2: Go to the BathRoom" << endl <<
		    "3: Go to the BedRoom" << endl <<
		    "4: Go out" << endl;

	int choice;
	cin >> choice;
	
	switch (choice) {
		case 1: {
			Kitchen kitchen;
			kitchen.enter();
			break;
		}
		/*case 2: {
			BathRoom bathroom;
			bathroom.enter();
			break;
		}
		case 3: {
			BedRoom bedroom;
			bedroom.enter();
			break;
		}*/
		case 4:
			cout << "Exiting the game." << endl;
			exit(0);
		default: 
			cout << "Wrong." << endl << "Please enter the value from the range.";
	}
	
}

