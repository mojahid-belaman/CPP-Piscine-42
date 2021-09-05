#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base()
{

}

Base *generate(void)
{
    srand(time(NULL));
    char c[] = {'A', 'B', 'C'};
    (void)c;
    int nb = rand() % 3;
    if (nb == 0)
        return (new A());
    else if (nb == 1)
        return (new B());
    else
        return (new C());

    return (nullptr);
}

void    identify(Base *p)
{
    
}

Base::~Base()
{

}