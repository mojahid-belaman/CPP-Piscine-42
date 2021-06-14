#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony p("mojahid", "belaman", "mijo");
    std::cout << "this object declare in stack!!" << std::endl;
}

void    ponyOnTheHeap()
{
    Pony *p = new Pony("Yassir", "Assam", "dad");
    std::cout << "this object allocated in heap!!" << std::endl;
    delete p;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}