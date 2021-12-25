#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {
}

Dummy::~Dummy(void) {
}

Dummy::Dummy(const Dummy &o) {
	*this = o;
}

Dummy &Dummy::operator=(const Dummy &o) {
	(void)o;
	return *this;
}

ATarget		*Dummy::clone(void) const {
	return new Dummy();
}
