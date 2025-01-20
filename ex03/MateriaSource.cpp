#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; ++i) materias_[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &ms) {
	operator=(ms);
}

MateriaSource &MateriaSource::operator = (MateriaSource const &ms) {
	if (this != &ms) {
		for (int i = 0; i < 4; ++i) {
			delete materias_[i];
			if (ms.materias_[i]) materias_[i] = ms.materias_[i]->clone();
			else materias_[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) delete materias_[i];
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; ++i) {
		if (materias_[i]) continue;
		materias_[i] = materia;
		return;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; ++i) {
		if (materias_[i] == NULL) continue;
		if (materias_[i]->getType() == type) return materias_[i]->clone();
	}
	return NULL;
}