#include "Form.hpp"

#include "Bureaucrat.hpp"

Form::Form(const std::string &name, int reqGrade, int execGrade): _name(name), _isSigned(false), _reqGrade(reqGrade), _execGrade(execGrade)
{}

Form::Form(const Form &other): _name(other._name), _isSigned(other._isSigned), _reqGrade(other._reqGrade), _execGrade(other._execGrade)
{}

Form &Form::operator=(const Form &rhs)
{
	this->_isSigned = rhs._isSigned;
	return (*this);
}

Form::~Form()
{}

const std::string &Form::getName() const
{
	return (_name);
}

bool	Form::getIsSigned() const
{
	return (_isSigned);
}

int	Form::getReqGrade() const
{
	return (_reqGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _reqGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _execGrade)
		throw GradeTooLowException();
	doExecute();
}

// ========================================================================== //
// GradeTooHighException
// ========================================================================== //


const char* Form::GradeTooHighException::what() const throw()
{
	return "From: Grade too high exception";
}


// ========================================================================== //
// GradeTooLowException
// ========================================================================== //

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form: Grade too low exception";
}

// ========================================================================== //
// Utils
// ========================================================================== //

std::ostream	&operator<<(std::ostream &os, const Form &b)
{
	os << "FormName: " << b.getName() << " IsSigned: " << b.getIsSigned() << " Required grade " << b.getReqGrade() << " Executer grade " << b.getExecGrade();
	return (os);
}
