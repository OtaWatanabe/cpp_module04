#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(IMateriaSource const &ims) {
	(void)ims;
}

IMateriaSource &IMateriaSource::operator = (IMateriaSource const &ims) {
	(void)ims;
	return *this;
}
