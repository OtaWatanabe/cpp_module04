#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), brain_(new Brain()) {
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), brain_(new Brain(*dog.brain_)) {
	std::cout << "Dog: copy constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &dog) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	Animal::operator=(dog);
	delete brain_;
	brain_ = new Brain(*dog.brain_);
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
