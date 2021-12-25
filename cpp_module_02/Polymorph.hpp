#ifndef POLYMORPH_H
# define POLYMORPH_H

# include "ASpell.hpp"

class Polymorph : public ASpell {

public:
	Polymorph(void);
	~Polymorph(void);
	Polymorph(const Polymorph &o);
	Polymorph &operator=(const Polymorph &o);

	virtual ASpell		*clone(void) const;

private:

};

#endif
