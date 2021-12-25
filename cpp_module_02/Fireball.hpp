#ifndef FIREBALL_H
# define FIREBALL_H

# include "ASpell.hpp"

class Fireball : public ASpell {

public:
	Fireball(void);
	~Fireball(void);
	Fireball(const Fireball &o);
	Fireball &operator=(const Fireball &o);

	virtual ASpell		*clone(void) const;

private:

};

#endif
