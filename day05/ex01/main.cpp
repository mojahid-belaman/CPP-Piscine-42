#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {   
        Bureaucrat b("Mojahid", 7);
        Form f("test_form", 3, 6, true);
        b.signForm(f);
        std::cout << f;
    }
    
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}