#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <exception>
#include <fstream>

class	Bureaucrat;

class	Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_reqGrade;
	const int			_execGrade;

protected:
	virtual void doExecute() const = 0;

public:
	Form(const std::string &name, int reqGrade, int execGrade);
	Form(const Form &other);
	Form &operator=(const Form &rhs);
	virtual ~Form();

	const std::string &getName() const;
	bool	getIsSigned() const;
	int		getReqGrade() const;
	int		getExecGrade() const;

	void	beSigned(const Bureaucrat &b);
	void execute(Bureaucrat const & executor) const;
public:
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &os, const Form &b);

#endif
