#include "Zombie.hpp"

Zombie::Zombie() : _name("Zombie")
{
}

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << _name << ": destructed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}