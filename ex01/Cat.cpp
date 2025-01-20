#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), brain_(new Brain()) {
	if (brain_ == NULL) {
		std::cerr << "memory allocation failed" << std::endl;
		exit(1);
	}
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(), brain_(NULL) {
	std::cout << "Cat: copy constructor called" << std::endl;
	Cat::operator=(cat);
}

Cat &Cat::operator = (const Cat &cat) {
	std::cout << "Cat: copy assignment operator called" << std::endl;
	Animal::operator=(cat);
	delete brain_;
	brain_ = new Brain(*cat.brain_);
	if (brain_ == NULL) {
		std::cerr << "memory allocation failed" << std::endl;
		exit(1);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat: destructor called" << std::endl;
	delete brain_;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}

void	Cat::setIdea(size_t i, const std::string &idea) {
	brain_->setIdea(i, idea);
}

const std::string	&Cat::getIdea(size_t i) {
	return brain_->getIdea(i);
}
