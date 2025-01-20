#include "ICharacter.hpp"

ICharacter::ICharacter(ICharacter const &ic) {
	(void)ic;
}

ICharacter &ICharacter::operator = (ICharacter const &ic) {
	(void)ic;
	return *this;
}
