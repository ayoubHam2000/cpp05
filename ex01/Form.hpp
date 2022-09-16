#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <exception>

class	Bureaucrat;

class	Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_reqGrade;
	const int			_execGrade;
public:
	Form(const std::string &name, int reqGrade, int execGrade);
	Form(const Form &other);
	Form &operator=(const Form &rhs);
	~Form();

	const std::string &getName() const;
	bool	getIsSigned() const;
	int		getReqGrade() const;
	int		getExecGrade() const;
	void	beSigned(const Bureaucrat &b);
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
