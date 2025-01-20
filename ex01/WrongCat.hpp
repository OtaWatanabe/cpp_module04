#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat(void);
	WrongCat(const WrongCat &cat);
	WrongCat &operator = (const WrongCat &cat);
	~WrongCat();
	void	makeSound(void) const;
};

#endif
