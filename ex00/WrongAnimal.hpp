#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal {
protected:
	std::string	type;
	WrongAnimal(std::string initType);
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &animal);
	WrongAnimal &operator = (const WrongAnimal &animal);
	~WrongAnimal();
	void	makeSound(void) const;
	const std::string &getType(void) const;
};

#endif
