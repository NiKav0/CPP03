#pragma once

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap &operator=(ClapTrap const &old);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setAtt(unsigned int att);
		unsigned int getAtt(void);
		unsigned int getHp(void);
		unsigned int getEp(void);
		std::string getName(void);
		void getStats(void);
		~ClapTrap(void);
	private:
		std::string _name;
		unsigned int _hp;
		unsigned int _ep;
		unsigned int _att;
};

