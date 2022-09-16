#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): Form(other), _target(other._target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}


void ShrubberyCreationForm::doExecute() const
{
	try
	{
		std::string file_name = _target + std::string("_shrubbery");
		std::ofstream file(file_name);
		file << "                                                         ." << std::endl;
		file << "                                              .         ;  " << std::endl;
		file << "                 .              .              ;%     ;;   " << std::endl;
		file << "                   ,           ,                :;%  %;   " << std::endl;
		file << "                    :         ;                   :;%;'     .,   " << std::endl;
		file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
		file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
		file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
		file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
		file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
		file << "                            ;@%. :@%%  %@@%;       " << std::endl;
		file << "                              %@bd%%%bd%%:;     " << std::endl;
		file << "                                #@%%%%%:;;" << std::endl;
		file << "                                %@@%%%::;" << std::endl;
		file << "                                %@@@%(o);  . '         " << std::endl;
		file << "                                %@@@o%;:(.,'         " << std::endl;
		file << "                            `.. %@@@o%::;         " << std::endl;
		file << "                               `)@@@o%::;         " << std::endl;
		file << "                                %@@(o)::;        " << std::endl;
		file << "                               .%@@@@%::;         " << std::endl;
		file << "                               ;%@@@@%::;.          " << std::endl;
		file << "                              ;%@@@@%%:;;;. " << std::endl;
		file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
		file << std::endl;
		file.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
