#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <iostream>

#include "Form.hpp"

class	ShrubberyCreationForm: public Form
{
private:
	const std::string _target;
public:
	ShrubberyCreationForm(const std::string &target = "");
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();
protected:
	virtual void doExecute() const;
};

#endif
