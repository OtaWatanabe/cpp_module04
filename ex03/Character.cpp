#include "Character.hpp"

Character::Character(std::string const &name) : name_(name) {
	for (size_t i = 0; i < 4; ++i) inventory_[i] = NULL;
}


Character::Character(Character const &chara) {
	operator=(chara);
}

Character &Character::operator = (Character const &chara) {
	if (this != &chara) {
		name_ = chara.name_;
		for (int i = 0; i < 4; ++i) {
			delete inventory_[i];
			if (chara.inventory_[i]) {
				inventory_[i] = chara.inventory_[i]->clone();
			}
			else inventory_[i] = NULL;
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) delete inventory_[i];
}

std::string const &Character::getName(void) const {
	return name_;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (inventory_[i] == NULL) {
			inventory_[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (0 <= idx && idx < 4) {
		inventory_[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || 4 <= idx) return;
	if (inventory_[idx]) inventory_[idx]->use(target);
}
