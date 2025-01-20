#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type_(type) {}

AMateria::AMateria(AMateria const &materia) {
	operator=(materia);
}

AMateria &AMateria::operator = (AMateria const &materia) {
	type_ = materia.type_;
	return *this;
}

std::string const &AMateria::getType(void) const {
	return type_;
}

void	AMateria::use(ICharacter &target) {
	(void)target;
	std::cout << "default" << std::endl;
}
