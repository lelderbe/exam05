#ifndef WARLOCK_H
# define WARLOCK_H

# include <string>
# include <iostream>

class Warlock {

public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock(void);

	const std::string	&getName() const;
	const std::string	&getTitle() const;

	void				setTitle(const std::string &title);

	void				introduce(void) const;

private:
	Warlock(void);
	Warlock(const Warlock &o);
	Warlock &operator=(const Warlock &o);

	std::string			name;
	std::string			title;

};

#endif
