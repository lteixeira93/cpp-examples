#include "Player.h"

void Player::setName(string name) {
	this->name = name;
}

string Player::getName() {
	return name;
}

void Player::setHealth(int health) {
	this->health = health;
}

int Player::getHealth() {
	return health;
}

void Player::setXP(int xp) {
	this->xp = xp;
}

int Player::getXP() {
	return xp;
}

Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val }
{
	cout << "Full Object Player Created" << endl;
}

/* Copy constructor implementation */
Player::Player(const Player& source)
	: name{ source.name }, health{ source.health }, xp{ source.xp }
{
	cout << "Object " << source.name << " Copied" << endl;
}

Player::~Player() {
	cout << "Object " << name << " Destroyed" << endl;
}