#include <iostream>
#include "BedRoom.h"
using namespace std;

void BedRoom::enter() {
	string thing;
	cout << "What do you want to do?" << endl;
	cout << "Option: sleep, play_games, find_insects" << endl;
	cin >> thing;

    if (thing == "sleep") {
        sleep();
    }
    else if (thing == "play_games") {
        play_games();
    }
}

void BedRoom::sleep() {
    cout << "You are now sleeping..." << endl;
    const char* bed2D[] = {
    " _______________________",
    "|           _ _         |",
    "|          ( U )        |",
    "|                       |",
    "|                       |",
    "|                       |",
    "|                       |",
    "|_______________________|"
    };

    int numLines = sizeof(bed2D) / sizeof(bed2D[0]);

    for (int i = 0; i < numLines; i++) {
        cout << bed2D[i] << endl;
    }
    exit(0);
}

void BedRoom::play_games() {
    cout << "Pick one number";

    const char* code[5] = {
            "   * * *       * * *      * * *        * * * * ",
            " *           *       *    *     *      *       ",
            " *           *       *    *       *    * * * * ",
            " *           *       *    *      *     *       ",
            "   * * *       * * *      * * *        * * * * "
    };

    for (int i = 0; i < 5; i++) {
        cout << code[i] << endl;
    }

}