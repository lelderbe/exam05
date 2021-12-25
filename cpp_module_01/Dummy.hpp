#ifndef DUMMY_H
# define DUMMY_H

# include "ATarget.hpp"

class Dummy : public ATarget {

public:
	Dummy(void);
	~Dummy(void);
	Dummy(const Dummy &o);
	Dummy &operator=(const Dummy &o);

	virtual ATarget		*clone(void) const;

private:

};

#endif
