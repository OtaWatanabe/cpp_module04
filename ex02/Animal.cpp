#include "Animal.hpp"

Animal::Animal(std::string initType) : type(initType) {
	std::cout << "Animal: protected string constructor called" << std::endl;
}

Animal::Animal(void) : type("") {
	std::cout << "Animal: default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) : type(animal.type) {
	std::cout << "Animal: copy constructor called" << std::endl;
};

Animal &Animal::operator = (const Animal &animal) {
	std::cout << "Animal: copy assignment operator called" << std::endl;
	if (this != &animal) {
		type = animal.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal: destructor called" << std::endl;
}

void	Animal::makeSound(void) const {
	std::cout << "zzz (default)" << std::endl;
}

const std::string	&Animal::getType(void) const {
	return type;
}
