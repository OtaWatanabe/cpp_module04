#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *materias_[4];
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &ms);
	MateriaSource &operator = (MateriaSource const &ms);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
