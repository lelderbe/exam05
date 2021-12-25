#ifndef BRICKWALL_H
# define BRICKWALL_H

# include "ATarget.hpp"

class BrickWall : public ATarget {

public:
	BrickWall(void);
	~BrickWall(void);
	BrickWall(const BrickWall &o);
	BrickWall &operator=(const BrickWall &o);

	virtual ATarget		*clone(void) const;

private:

};

#endif
