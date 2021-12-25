#ifndef TARGETGEN_H
# define TARGETGEN_H

# include "ATarget.hpp"
# include <string>
# include <iostream>
# include <map>

class TargetGenerator {

public:
	TargetGenerator(void);
	~TargetGenerator(void);

	void			learnTargetType(ATarget *target);
	void			forgetTargetType(const std::string &name);
	ATarget			*createTarget(const std::string &name);

private:
	TargetGenerator(const TargetGenerator &o);
	TargetGenerator &operator=(const TargetGenerator &o);

	std::map<std::string, ATarget *>	targets;
};

#endif
