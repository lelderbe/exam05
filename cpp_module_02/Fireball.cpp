#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {
}

Fireball::~Fireball(void) {
}

Fireball::Fireball(const Fireball &o) {
	*this = o;
}

Fireball &Fireball::operator=(const Fireball &o) {
	(void)o;
	return *this;
}

ASpell		*Fireball::clone(void) const {
	return new Fireball();
}
