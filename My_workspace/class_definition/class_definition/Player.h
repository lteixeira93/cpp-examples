#ifndef _PLAYER_H_
#define _PLAYER_H_

#include<string>
#include<iostream>

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

	Player();
	~Player();
};

#endif // _PLAYER_H_

