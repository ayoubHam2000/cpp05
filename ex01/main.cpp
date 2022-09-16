#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test1()
{
	Form	f("Home", 42, 37);
	Bureaucrat	b1("Bob", 42);
	Bureaucrat	b2("steeve", 50);

	std::cout << f << std::endl;
	//f.beSigned(b1);
	b1.signForm(f);
	b2.signForm(f);
}

int	main()
{
	test1();
	return (0);
}
