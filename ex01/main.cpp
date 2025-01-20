#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal *animalArray[10];

	for (size_t i = 0; i < 5; ++i) animalArray[i] = new Dog();
	for (size_t i = 5; i < 10; ++i) animalArray[i] = new Cat();
	for (size_t i = 0; i < 10; ++i) animalArray[i]->makeSound();
	for (size_t i = 0; i < 10; ++i) delete animalArray[i];

	Dog	dog;
	Dog	dog1(dog);
	Dog	dog2;

	dog2 = dog1;
	dog.setIdea(0, "aaa");
	dog1.setIdea(0, "bbb");
	dog2.setIdea(0, "ccc");
	std::cout << "0: " << dog.getIdea(0) << std::endl;
	std::cout << "1: " << dog1.getIdea(0) << std::endl;
	std::cout << "2: " << dog2.getIdea(0) << std::endl;

	Cat	cat;
	Cat	cat1(cat);
	Cat	cat2;

	cat2 = cat1;
	cat.setIdea(0, "aaa");
	cat1.setIdea(0, "bbb");
	cat2.setIdea(0, "ccc");
	std::cout << "0: " << cat.getIdea(0) << std::endl;
	std::cout << "1: " << cat1.getIdea(0) << std::endl;
	std::cout << "2: " << cat2.getIdea(0) << std::endl;
	return 0;
}
