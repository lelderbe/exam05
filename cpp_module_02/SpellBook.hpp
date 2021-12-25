#ifndef SPELLBOOK_H
# define SPELLBOOK_H

# include "ASpell.hpp"
# include <string>
# include <iostream>
# include <map>

class SpellBook {

public:
	SpellBook(void);
	~SpellBook(void);

	void				learnSpell(ASpell *spell);
	void				forgetSpell(const std::string &name);
	ASpell				*createSpell(const std::string &name);

private:
	SpellBook(const SpellBook &o);
	SpellBook &operator=(const SpellBook &o);

	std::map<std::string, ASpell *>	spells;
};

#endif
