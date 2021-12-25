#include "SpellBook.hpp"

SpellBook::SpellBook(void) {
	//std::cout << "SpellBook created" << std::endl;
}

SpellBook::~SpellBook(void) {
	//std::cout << "SpellBook destructor" << std::endl;

	std::map<std::string, ASpell *>::iterator it = spells.begin();
	while (it != spells.end()) {
		//std::cout << "deleting spell " << it->first << std::endl;
		delete it->second;
		it++;
	}
	spells.clear();
	//std::cout << "spells count:" << spells.size() << std::endl;
}

SpellBook::SpellBook(const SpellBook &o) {
	*this = o;
}

SpellBook &SpellBook::operator=(const SpellBook &o) {
	(void)o;
	return *this;
}

void	SpellBook::learnSpell(ASpell *spell) {
	if (spell && spells.count(spell->getName()) == 0) {
		spells[spell->getName()] = spell->clone();
	}
}

void	SpellBook::forgetSpell(const std::string &name) {
	if (spells.count(name) > 0) {
		delete spells[name];
		spells.erase(name);
	}
}

ASpell	*SpellBook::createSpell(const std::string &name) {
	if (spells.count(name) > 0) {
		return spells[name];
	}
	return 0;
}
