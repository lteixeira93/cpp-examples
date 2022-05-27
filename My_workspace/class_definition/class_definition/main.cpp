#include<iostream>
#include<vector>
#include<string>

#include "Player.h"

using namespace std;

int main(void) {
	Player frank;
	Player hero;

	Player* enemy{ nullptr };
	enemy = new Player;

	delete enemy;

	Player players[]{ frank, hero };
	vector <Player> vPlayers{ frank };

	hero.setName("Luiz");
	hero.setXP(200);
	hero.setHealth(1000);

	vPlayers.push_back(hero);

	cout << "Hero name: " << hero.getName() << endl;

}