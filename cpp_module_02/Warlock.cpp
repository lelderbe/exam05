#include "Warlock.hpp"

Warlock::Warlock(void) {
}

Warlock::Warlock(const std::string &name, const std::string &title) {
	this->name = name;
	this->title = title;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {
	std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock &o) {
	*this = o;
}

Warlock &Warlock::operator=(const Warlock &o) {
	(void)o;
	return *this;
}

const std::string	&Warlock::getName() const {
	return name;
}

const std::string	&Warlock::getTitle() const {
	return title;
}

void	Warlock::setTitle(const std::string &title) {
	this->title = title;
}

void	Warlock::introduce(void) const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell) {
	book.learnSpell(spell);
}

void	Warlock::forgetSpell(const std::string &name) {
	book.forgetSpell(name);
}

void	Warlock::launchSpell(const std::string &name, const ATarget &target) {
	ASpell *spell = book.createSpell(name);
	if (spell) {
		spell->launch(target);
	}
}
