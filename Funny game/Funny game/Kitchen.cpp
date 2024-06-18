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
	cout << "You cna find banana, milk, iced_black_tea, cash." << endl;
	cout << "Please enter the item you want:";
	cin >> item; //輸入想要的東西

	if (item == "cash") {
		cout << "You have been ambushed by a thief!" << endl << "You've been killed!" << endl;
		cout << "You lost!!!" << endl;
		exit(0);
	}
	else if (item == "banana") {
		cout << "You have take: " << item << endl;
		cout << "Yummy." << endl;
	}
	else if (item == "milk") {
		cout << "You have take: " << item << endl;
		cout << "Awesome!" << endl;
	}
	else if (item == "iced_black_tea") {
		cout << "You have take: " << item << endl;
		cout << "Tasty!" << endl;
	}
}