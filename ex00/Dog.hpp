#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include "Animal.hpp"

class Dog : public Animal{
public:
	Dog(void);
	Dog(const Dog &dog);
	Dog &operator = (const Dog &dog);
	~Dog();
	void	makeSound(void) const;
};

#endif
