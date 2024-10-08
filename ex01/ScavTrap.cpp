#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("No name"), _hp(100), _ep(50), _att(20) {
	std::cout << "Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _ep(50), _att(20) {
	std::cout << _name << "'s constructor called." << std::endl;
	this->_name = name;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &old) {
	if (this != &old)
	{
		this->_name = old._name;
		this->_hp = old._hp;
		this->_ep = old._ep;
		this->_att = old._att;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor called." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}