#ifndef Intern_HPP
#define Intern_HPP

#include <iostream>
#include <utility>


#include "Form.hpp"


typedef  Form *(*form_type)(const std::string &);

class	Intern
{
private:

public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &rhs);
	~Intern();
	
	Form *makeForm(const std::string &form, const std::string &target);

private:
	static Form *createPresidentialPardonForm(const std::string &target);
	static Form *createRobotomyRequestForm(const std::string &target);
	static Form *createShrubberyCreationForm(const std::string &target);
};

#endif
