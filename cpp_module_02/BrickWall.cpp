#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall") {
}

BrickWall::~BrickWall(void) {
}

BrickWall::BrickWall(const BrickWall &o) {
	*this = o;
}

BrickWall &BrickWall::operator=(const BrickWall &o) {
	(void)o;
	return *this;
}

ATarget		*BrickWall::clone(void) const {
	return new BrickWall();
}
