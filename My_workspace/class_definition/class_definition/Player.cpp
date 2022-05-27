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

Player::Player() {
	cout << "Object Player Created" << endl;
}

Player::~Player() {
	cout << "Object Player Destroyed" << endl;
}