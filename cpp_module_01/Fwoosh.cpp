#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {
}

Fwoosh::~Fwoosh(void) {
}

Fwoosh::Fwoosh(const Fwoosh &o) {
	*this = o;
}

Fwoosh &Fwoosh::operator=(const Fwoosh &o) {
	(void)o;
	return *this;
}

ASpell		*Fwoosh::clone(void) const {
	return new Fwoosh();
}
