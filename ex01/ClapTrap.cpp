#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No Name") , _hp(10), _ep(10), _att(0) {
	std::cout << "Defaul constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hp(10), _ep(10), _att(0) {
	std::cout << _name << "'s Constructor called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << "'s destructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &old) {
	if (this != &old)
	{
		this->_name = old._name;
		this->_hp = old._hp;
		this->_ep = old._ep;
		this->_att = old._att;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {	
	if (_ep <= 0)
		std::cout << _name << " have no energy Point" << std::endl;
	else {
		std::cout << _name << " attacks " << target << " dealing " << _att << " damage!" << std::endl;
		_ep--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= _hp || _hp == 0) {
		std::cout << _name << " is dead." << std::endl;
		_hp = 0;
		_ep = 0;
	}
	else {
		std::cout << _name << " took " << amount << " damage!"<<std::endl;
		_hp -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_ep <= 0)
		std::cout << _name << " have no energy Point."<<std::endl;
	else {
		_hp += amount;
		_ep--;
		std::cout << _name << " has repaired himself by +" << amount << " HP!"<<std::endl;
	}
}

void ClapTrap::setAtt(unsigned int att) {
	_att = att;
}

unsigned int ClapTrap::getHp(void) {
	this->_hp = 10;
	return _hp;
}

unsigned int ClapTrap::getEp(void) {
	this->_ep = 10;
	return _ep;
}

std::string ClapTrap::getName(void) {
	return _name;
}

void ClapTrap::getStats(void) {
	std::cout << _name << "'s HP: " << _hp << std::endl;
	std::cout << _name << "'s Energy points: " << _ep << std::endl;
}

unsigned int ClapTrap::getAtt(void) {
	return _att;
}