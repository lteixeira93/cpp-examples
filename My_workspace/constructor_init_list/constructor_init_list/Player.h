#ifndef _PLAYER_H_
#define _PLAYER_H_

#include<string>
#include<iostream>

//#define NO_DELEGATE
//#define DELEGATE
//#define DEFAULT_CONSTRUCTOR

using namespace std;

class Player {
private:
	string name;
	int health;
	int xp;

public:
	void setName(string name);
	void setHealth(int health);
	void setXP(int xp);

	string getName();
	int getHealth();
	int getXP();

#ifdef NO_DELEGATE 
	Player();
	Player(string name, int health, int xp);	
#else
	Player(string name = "None", int health = 0, int xp = 0);
#endif
	~Player();
};


#endif // _PLAYER_H_