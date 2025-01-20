#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), brain_(new Brain()) {
	if (brain_ == NULL) {
		std::cerr << "memory allocation failed" << std::endl;
		std::exit(1);
	}
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal() {
	std::cout << "Dog: copy constructor called" << std::endl;
	operator=(dog);
}

Dog &Dog::operator = (const Dog &dog) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	Animal::operator=(dog);
	delete brain_;
	brain_ = new Brain(*dog.brain_);
	if (brain_ == NULL) {
		std::cerr << "memory allocation failed" << std::endl;
		std::exit(1);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog: destructor called" << std::endl;
	delete brain_;
}

void	Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}

void	Dog::setIdea(size_t i, const std::string &idea) {
	brain_->setIdea(i, idea);
}

const std::string	&Dog::getIdea(size_t i) {
	return brain_->getIdea(i);
}
