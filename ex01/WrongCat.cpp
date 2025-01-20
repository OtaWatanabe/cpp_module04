#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat") {
	std::cout << "WrongCat: default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat) {
	std::cout << "WrongCat: copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &cat) {
	std::cout << "WrongCat: copy assignment operator called" << std::endl;
	WrongAnimal::operator=(cat);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
