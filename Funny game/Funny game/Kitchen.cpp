#include "Kitchen.h"
#include <iostream>
#include <string>

void Kitchen::enter() {
	cout << "You are in ther Kitchen." << endl;
	cout << "Now you can open refrigerator." << endl;
	RG();
}

void Kitchen::RG() {
	string item;
	cout << "You cna find banana, ice cream, milk, iced black tea, cash." << endl;
	cout << "Please enter the item you want:";
	cin >> item; //¿é¤J·Q­nªºªF¦è

	if (item == "cash") {
		cout << "You have been ambushed by a thief!" << endl << "You've been killed!" << endl;
		cout << "You lost!!!" << endl;
		exit(0);
	}
	else {
		cout << "You have take: " << item << endl;
		cout << "Returning to the living room." << endl;
	}
	
	
}
