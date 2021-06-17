#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony p("pony1", "white");
    std::cout << "this object declare in stack!!" << std::endl;
}

void    ponyOnTheHeap()
{
    Pony *p = new Pony("pony2", "black");
    std::cout << "this object allocated in heap!!" << std::endl;
    delete p;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}