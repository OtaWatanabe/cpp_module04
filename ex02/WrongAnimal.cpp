#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string initType) : type(initType) {
	std::cout << "WrongAnimal: protected string constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(void) : type("") {
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) : type(animal.type) {
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
};

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &animal) {
	std::cout << "WrongAnimal: copy assignment operator called" << std::endl;
	if (this != &animal) {
		type = animal.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "zzz (default)" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const {
	return type;
}
