#include "BathRoom.h"
#include <iostream>
using namespace std;

void BathRoom::enter() {
	cout << "This is bathroom." << endl;
	cout << "Option: taking a shower, brush teeth." << endl;
	cout << "There is not toilet" << endl;
}

void BathRoom::bath() {
	string place;
	cin >> place;
	cout << "What do you wnat do? tak a shower(please enter A)or brush teeth(please enter B)";
	
	if (place == "A") {
		cout << "You are taking a shower." << endl;
	}

	else if (place == "B") {
		cout << "You are brushing your teeth." << endl;
	}
}