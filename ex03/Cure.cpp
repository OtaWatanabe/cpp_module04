#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const &cure) : AMateria(cure) {}

Cure &Cure::operator = (Cure const &cure) {
	AMateria::operator=(cure);
	return *this;
}

AMateria*	Cure::clone(void) const {
	AMateria	*ret = new Cure(*this);
	if (ret == NULL) {
		std::cerr << "memory allocation failed" << std::endl;
		exit(1);
	}
	return ret;
}
void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
