#pragma once

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string _name);
		~ClapTrap(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string _name;
		int _hp = 10;
		int _ep = 10;
		int _att = 0;
};

