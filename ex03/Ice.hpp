#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include <cstdlib>

class Ice : public AMateria {
public:
	Ice(void);
	Ice(Ice const &ice);
	Ice &operator = (Ice const &ice);
	~Ice() {}
	AMateria*	clone(void) const;
	void	use(ICharacter& target);
};

#endif
