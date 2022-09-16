#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern()
{}

Intern::Intern(const Intern &)
{}

Intern &Intern::operator=(const Intern &)
{
	return (*this);
}

Intern::~Intern()
{}

Form *Intern::makeForm(const std::string &form, const std::string &target)
{
	int	size = 3;
	std::pair<std::string, form_type> forms[] = 
	{
		std::pair<std::string, form_type>("PresidentialPardon", &createPresidentialPardonForm),
		std::pair<std::string, form_type>("RobotomyRequest", &createRobotomyRequestForm),
		std::pair<std::string, form_type>("ShrubberyCreation", &createShrubberyCreationForm)
	};
	for (int i = 0; i != size; i++)
		if (!forms[i].first.compare(form))
			return (forms[i].second(target));
	throw std::runtime_error("Form Not Found!!");
}

Form *Intern::createPresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}
Form *Intern::createRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}
Form *Intern::createShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}
