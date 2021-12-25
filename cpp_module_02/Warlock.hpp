#ifndef WARLOCK_H
# define WARLOCK_H

# include "SpellBook.hpp"
# include "ASpell.hpp"
# include "ATarget.hpp"
# include <string>
# include <iostream>
# include <map>

class Warlock {

public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock(void);

	const std::string	&getName() const;
	const std::string	&getTitle() const;

	void				setTitle(const std::string &title);

	void				introduce(void) const;

	void				learnSpell(ASpell *spell);
	void				forgetSpell(const std::string &name);
	void				launchSpell(const std::string &name, const ATarget &target);

private:
	Warlock(void);
	Warlock(const Warlock &o);
	Warlock &operator=(const Warlock &o);

	std::string			name;
	std::string			title;

	//std::map<std::string, ASpell *>	spells;

	SpellBook			book;

};

#endif
