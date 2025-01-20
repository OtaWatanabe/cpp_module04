#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
protected:
	std::string	type;
	Animal(std::string initTYpe);
public:
	Animal(void);
	Animal(const Animal &animal);
	Animal &operator = (const Animal &animal);
	virtual ~Animal();
	virtual void	makeSound(void) const = 0;
	const std::string &getType(void) const;
};

#endif
