#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	checkGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name)
{
	this->_grade = other._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	checkGrade(_grade - 1);
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	checkGrade(_grade + 1);
	_grade++;
}

// ========================================================================== //
// private
// ========================================================================== //

void	Bureaucrat::checkGrade(int newGrade)
{
	if (newGrade < 1)
		throw GradeTooHighException();
	if (newGrade > 150)
		throw GradeTooLowException();
}


// ========================================================================== //
// GradeTooHighException
// ========================================================================== //


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}


// ========================================================================== //
// GradeTooLowException
// ========================================================================== //

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

// ========================================================================== //
// Utils
// ========================================================================== //

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
