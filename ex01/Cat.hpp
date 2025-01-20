#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <cstdlib>

class Cat : public Animal {
private:
	Brain	*brain_;

public:
	Cat(void);
	Cat(const Cat &cat);
	Cat &operator = (const Cat &cat);
	~Cat();
	void	makeSound(void) const;
	void	setIdea(size_t i, const std::string &idea);
	const std::string	&getIdea(size_t i);
};

#endif
