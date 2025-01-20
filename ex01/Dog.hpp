#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
private:
	Brain	*brain_;

public:
	Dog(void);
	Dog(const Dog &dog);
	Dog &operator = (const Dog &dog);
	~Dog();
	void	makeSound(void) const;
	void	setIdea(size_t i, const std::string &idea);
	const std::string	&getIdea(size_t i);
};

#endif
