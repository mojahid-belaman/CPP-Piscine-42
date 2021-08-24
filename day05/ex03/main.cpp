#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    rrf->Action();
}