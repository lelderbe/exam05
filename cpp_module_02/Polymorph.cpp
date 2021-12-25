#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter") {
}

Polymorph::~Polymorph(void) {
}

Polymorph::Polymorph(const Polymorph &o) {
	*this = o;
}

Polymorph &Polymorph::operator=(const Polymorph &o) {
	(void)o;
	return *this;
}

ASpell		*Polymorph::clone(void) const {
	return new Polymorph();
}
