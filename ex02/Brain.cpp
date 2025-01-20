#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	std::cout << "Brain: copy constructor called" << std::endl;
	for (size_t i = 0; i < 100; ++i) ideas_[i] = brain.ideas_[i];
}

Brain &Brain::operator = (const Brain &brain) {
	std::cout << "Brain: copy assignment operator called" << std::endl;
	for (size_t i = 0; i < 100; ++i) ideas_[i] = brain.ideas_[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain: destructor called" << std::endl;
}

const std::string	&Brain::getIdea(size_t i) const {
	return ideas_[i];
}

void	Brain::setIdea(size_t i, const std::string &idea) {
	ideas_[i] = idea;
}
