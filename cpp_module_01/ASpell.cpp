#include "ASpell.hpp"

ASpell::ASpell(void) {
}

ASpell::ASpell(const std::string &name, const std::string &effects) {
	this->name = name;
	this->effects = effects;
}

ASpell::~ASpell(void) {
}

ASpell::ASpell(const ASpell &o) {
	*this = o;
}

ASpell &ASpell::operator=(const ASpell &o) {
	(void)o;
	return *this;
}

const std::string	&ASpell::getName(void) const {
	return name;
}

const std::string	&ASpell::getEffects(void) const {
	return effects;
}

void	ASpell::launch(const ATarget &target) const {
	target.getHitBySpell(*this);
}
