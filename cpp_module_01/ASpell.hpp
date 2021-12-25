#ifndef ASPELL_H
# define ASPELL_H

# include "ATarget.hpp"
# include <string>
# include <iostream>

class ATarget;

class ASpell {

public:
	ASpell(void);
	ASpell(const std::string &name, const std::string &effects);
	virtual ~ASpell(void);
	ASpell(const ASpell &o);
	ASpell &operator=(const ASpell &o);

	const std::string	&getName(void) const;
	const std::string	&getEffects(void) const;

	virtual ASpell		*clone(void) const = 0;

	void				launch(const ATarget &target) const;

protected:
	std::string			name;
	std::string			effects;

private:

};

#endif
