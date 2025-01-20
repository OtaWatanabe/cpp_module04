#ifndef CURE_HPP
# define CURE_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <cstdlib>

class Cure : public AMateria {
public:
	Cure(void);
	Cure(Cure const &Cure);
	Cure &operator = (Cure const &Cure);
	~Cure() {}
	AMateria*	clone(void) const;
	void	use(ICharacter& target);
};

#endif
