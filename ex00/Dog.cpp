#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	std::cout << "Dog: copy constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &dog) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	Animal::operator=(dog);
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog: destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}
