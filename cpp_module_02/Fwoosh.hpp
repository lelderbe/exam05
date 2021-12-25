#ifndef FWOOSH_H
# define FWOOSH_H

# include "ASpell.hpp"

class Fwoosh : public ASpell {

public:
	Fwoosh(void);
	~Fwoosh(void);
	Fwoosh(const Fwoosh &o);
	Fwoosh &operator=(const Fwoosh &o);

	virtual ASpell		*clone(void) const;

private:

};

#endif
