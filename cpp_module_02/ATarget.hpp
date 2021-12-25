#ifndef ATARGET_H
# define ATARGET_H

# include "ASpell.hpp"
# include <string>
# include <iostream>

class ASpell;

class ATarget {

public:
	ATarget(void);
	ATarget(const std::string &type);
	virtual ~ATarget(void);
	ATarget(const ATarget &o);
	ATarget &operator=(const ATarget &o);

	const std::string	&getType(void) const;

	virtual ATarget		*clone(void) const = 0;

	void				getHitBySpell(const ASpell &spell) const;

protected:
	std::string			type;

private:

};

#endif
