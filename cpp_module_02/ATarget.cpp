#include "ATarget.hpp"

ATarget::ATarget(void) {
}

ATarget::ATarget(const std::string &type) {
	this->type = type;
}

ATarget::~ATarget(void) {
}

ATarget::ATarget(const ATarget &o) {
	*this = o;
}

ATarget &ATarget::operator=(const ATarget &o) {
	(void)o;
	return *this;
}

const std::string	&ATarget::getType(void) const {
	return type;
}

void	ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
