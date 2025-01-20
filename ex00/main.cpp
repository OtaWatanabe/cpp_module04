#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = new Animal(*i);
	Animal cp;
	cp = *meta;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << "default: " << meta->getType() << std::endl;
	std::cout << "default: " << cp.getType() << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	k->makeSound();
	cp.makeSound();
	delete k;

	const Dog dog;
	const Dog dog1(dog);
	Dog dog2;
	dog2 = dog1;

	std::cout << dog2.getType() << ": ";
	dog2.makeSound();

	const Cat cat;
	const Cat cat1(cat);
	Cat cat2;
	cat2 = cat1;

	std::cout << cat2.getType() << ": ";
	cat2.makeSound();

	const WrongAnimal* metaW = new WrongAnimal();
	const WrongAnimal* iW = new WrongCat();
	const WrongAnimal* jW = new WrongAnimal(*iW);
	WrongAnimal cpW;
	cpW = *metaW;

	std::cout << iW->getType() << " " << std::endl;
	std::cout << jW->getType() << " " << std::endl;
	std::cout << "default: " << metaW->getType() << std::endl;
	std::cout << "default: " << cpW.getType() << std::endl;
	iW->makeSound(); 
	metaW->makeSound();
	delete metaW;
	delete iW;

	jW->makeSound();
	cpW.makeSound();
	delete jW;

	return 0;
}
