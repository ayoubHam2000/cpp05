#include "Bureaucrat.hpp"

void	test1()
{
	Bureaucrat	br("Jim", 200);
}

void	test2()
{
	Bureaucrat	br("Jim", -1);
}


void	test3()
{
	Bureaucrat	br("Jim", 20);
	std::cout << br << std::endl;
}

void	test4()
{
	Bureaucrat	br("Jim", 150);
	std::cout << br << std::endl;
	br.decrementGrade();

}

void	test5()  //throw() //just a promise to the compiler that this function will not throw
{
	Bureaucrat	br("Jim", 1);
	std::cout << br << std::endl;
	br.incrementGrade();
}



int	main()
{
	try
	{
		//test1(); //raise GradeTooLowException
		//test2(); //raise GradeTooHighException
		//test3(); //test print
		//test4(); //raise GradeTooLowException after decrement
		test5(); //raise GradeTooHighException after increment
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "E1: " << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "E2: " << e.what() << '\n';
	}
	return (0);
}
