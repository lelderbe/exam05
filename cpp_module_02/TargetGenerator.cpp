#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {
	//std::cout << "TargetGenerator created" << std::endl;
}

TargetGenerator::~TargetGenerator(void) {
	//std::cout << "TargetGenerator destructor" << std::endl;

	std::map<std::string, ATarget *>::iterator it = targets.begin();
	while (it != targets.end()) {
		//std::cout << "deleting target " << it->first << std::endl;
		delete it->second;
		it++;
	}
	targets.clear();
	//std::cout << "targets count:" << targets.size() << std::endl;
}

TargetGenerator::TargetGenerator(const TargetGenerator &o) {
	*this = o;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &o) {
	(void)o;
	return *this;
}

void	TargetGenerator::learnTargetType(ATarget *target) {
	if (target && targets.count(target->getType()) == 0) {
		targets[target->getType()] = target->clone();
	}
}

void	TargetGenerator::forgetTargetType(const std::string &name) {
	if (targets.count(name) > 0) {
		delete targets[name];
		targets.erase(name);
	}
}

ATarget	*TargetGenerator::createTarget(const std::string &name) {
	if (targets.count(name) > 0) {
		return targets[name];
	}
	return 0;
}
