#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <iostream>
#include <exception>

class	Form;

class	Bureaucrat
{
private:
	const std::string _name;
	int			_grade;

private:
	void	checkGrade(int newGrade);

public:
	Bureaucrat(const std::string &name = "", int grade = 150);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat();
	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);
public:
	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b);

#endif
