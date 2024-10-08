#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ClapTrap claptrap("Zombi z7af");
	ClapTrap claptrap2("Hbibna");
	ScavTrap scavtrap("Homer Simpson");
	

	claptrap.setAtt(5);
	claptrap2.setAtt(1);

	claptrap.getEp();
	claptrap2.getEp();

	claptrap.getHp();
	claptrap2.getHp();

	claptrap.attack(scavtrap.getName());

	claptrap2.beRepaired(2);
	claptrap2.getStats();
	claptrap.getStats();
	return 0;
}