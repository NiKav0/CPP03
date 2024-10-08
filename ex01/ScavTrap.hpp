#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap &operator=(ScavTrap const &old);
		~ScavTrap();
		void guardGate();
	private :
		std::string _name;
		unsigned int _hp;
		unsigned int _ep;
		unsigned int _att;
};
