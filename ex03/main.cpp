#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

// __attribute__((destructor))
// static void destructor() {
// 	system("leaks -q test");
// }

int main() {
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp1;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	delete tmp;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(4, *bob);
	me->unequip(3);
	me->unequip(4);
	me->equip(src->createMateria("ice"));
	me->use(0, *bob);
	std::cout << src->createMateria("aaa") << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}
