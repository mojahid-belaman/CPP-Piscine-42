#include "Intern.hpp"


int main()
{
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("presidentialpardon", "Bender");
    rrf->Action();
}