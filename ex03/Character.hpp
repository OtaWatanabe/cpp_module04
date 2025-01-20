#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"

class Character : public ICharacter {
private:
	AMateria	*inventory_[4];
	std::string	name_;

public:
	Character(std::string const &name = "");
	Character(Character const &chara);
	Character &operator = (Character const &chara);
	~Character();
	std::string const &getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
