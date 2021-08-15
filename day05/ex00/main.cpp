#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << "_____________________________________________\n";
        std::cout << "\t\t\e[1;37mFirst Test:\e[0m\n"; 
        std::cout << "\t\t\e[1;37m-----------\e[0m\n"; 
        Bureaucrat b("Yassir", 150);
        std::cout << b;
        b.increment();
        std::cout << b;
        std::cout << "_____________________________________________\n";

        std::cout << "_____________________________________________\n";
        std::cout << "\t\t\e[1;37mSecond Test:\e[0m\n"; 
        std::cout << "\t\t\e[1;37m------------\e[0m\n"; 
        Bureaucrat b2("zakaria", 1);
        std::cout << b2;
        b2.decrement();
        std::cout << b2;
        std::cout << "_____________________________________________\n";

        std::cout << "_____________________________________________\n";
        std::cout << "\t\t\e[1;37mThird Test:\e[0m\n"; 
        std::cout << "\t\t\e[1;37m------------\e[0m\n"; 
        Bureaucrat b3("Ayoub", 150);
        std::cout << b3;
        b3.decrement();
        std::cout << b3;
        
        std::cout << "_____________________________________________\n";
        std::cout << "\t\t\e[1;37mFour Test:\e[0m\n"; 
        std::cout << "\t\t\e[1;37m------------\e[0m\n"; 
        Bureaucrat b4("Ayoub", 1);
        std::cout << b4;
        b4.increment();
        std::cout << b4;
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\e[1;37m====================\e[0m" << std::endl;
    std::cout << "\e[1;37mProgram is Finished!\e[0m" << std::endl;
    std::cout << "\e[1;37m====================\e[0m" << std::endl;
}