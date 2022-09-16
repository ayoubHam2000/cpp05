#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	checkGrade();
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
	_grade--;
	checkGrade();
}

void Bureaucrat::decrementGrade()
{
	_grade++;
	checkGrade();
}

// ========================================================================== //
// private
// ========================================================================== //

void	Bureaucrat::checkGrade()
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
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
