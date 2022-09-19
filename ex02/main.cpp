#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void	test1()
{
	ShrubberyCreationForm s("Home");
	
	Bureaucrat b1("Bob", 20);
	
	//b1.signForm(p);
	s.execute(b1);
	b1.executeForm(s);
}

void	test2()
{
	RobotomyRequestForm r("Home");
	
	Bureaucrat b1("Bob", 20);
	
	b1.signForm(r);
	r.execute(b1);
	b1.executeForm(r);
}

void	test3()
{
	PresidentialPardonForm p("Home");
	
	Bureaucrat b1("Bob", 5);
	
	b1.signForm(p);
	p.execute(b1);
	b1.executeForm(p);
}
int	main()
{
	try
	{
		test2();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
