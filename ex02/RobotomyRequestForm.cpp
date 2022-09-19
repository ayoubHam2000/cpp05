#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): Form(other), _target(other._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::doExecute() const
{
	std::cout << "zzzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
	std::srand(time(NULL));
	if (std::rand() % 2)
	{
		std::cout << _target << " was robotomized!" << std::endl;
	}
	else
	{
		std::cout << _target << "The robotization messed up..." << std::endl;
	}
}
