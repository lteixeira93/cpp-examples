#include "Player.h"

//#define NO_DELEGATE
//#define DELEGATE
//#define DEFAULT_CONSTRUCTOR

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

#ifdef NO_DELEGATE 

Player::Player() 
: name{ "None" }, health{ 0 }, xp{ 0 }
{
	cout << "Empty Object Player Created" << endl;
}

Player::Player(string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp{xp_val} 
{
	cout << "Full Object Player Created" << endl;
}

#elif DELEGATE

Player::Player()
: Player { "None" , 0 , 0 }
{
	cout << "Empty Object Player Created" << endl;
}

Player::Player(string name_val, int health_val, int xp_val)
: name{ name_val }, health{ health_val }, xp{ xp_val }
{
	cout << "Full Object Player Created" << endl;
}

#else 

Player::Player(string name_val, int health_val, int xp_val)
: name{ name_val }, health{ health_val }, xp{ xp_val }
{
	cout << "Full Object Player Created" << endl;
}

#endif


Player::~Player() {
	cout << "Object Player Destroyed" << endl;
}