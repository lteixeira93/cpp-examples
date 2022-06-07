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

	Player(string name_val = "Empty", int health_val = 0, int xp_val = 0);

	/* Copy constructor prototype */
	Player(const Player& source);

	~Player();
};


#endif // _PLAYER_H_