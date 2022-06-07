#include<iostream>
#include<vector>
#include<string>

#include "Player.h"

using namespace std;

void display_Player(Player p) {
	cout << "Name: " << p.getName() << endl;
	cout << "Health: " << p.getHealth() << endl;
	cout << "XP: " << p.getXP() << endl;
}

int main(void) {
	Player obj0;
	display_Player(obj0); // Creating a copy of obj0

	//Player obj1("Hero");
	//Player obj2("Frank", 350);
	//Player obj3("Luiz", 100, 1000);
}