#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain {
private:
	std::string	ideas_[100];

public:
	Brain(void);
	Brain(const Brain &brain);
	Brain &operator = (const Brain &brain);
	~Brain();
	const std::string	&getIdea(size_t i) const;
	void	setIdea(size_t i, const std::string &idea);
};

#endif