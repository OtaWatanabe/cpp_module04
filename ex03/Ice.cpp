#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &ice) : AMateria(ice) {}

Ice &Ice::operator = (Ice const &ice) {
	AMateria::operator=(ice);
	return *this;
}

AMateria*	Ice::clone(void) const {
	AMateria	*ret = new Ice(*this);
	if (ret == NULL) {
		std::cerr << "memory allocation failed" << std::endl;
		exit(1);
	}
	return ret;
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

