
#include <iostream>
#include <string>


class A
{
private:
    int x1;
    int x2;
public:
    A():x1(1337), x2(42){};
    void    printA()
    {
        std::cout << x1 << ", " << x2 << std::endl;
    }
    ~A(){};
};

class B
{
private:
    char c;
public:
    B() : c('B'){}
    void    printB()
    {
        std::cout << c << std::endl;
    }
    ~B(){};
};

int main()
{
    // int a = 70;

    // int *pi = &a;

    // char *pc = reinterpret_cast<char *>(pi);
    // std::cout << *pc << std::endl;

    // int *pc2 = reinterpret_cast<int *>(pc);
    // std::cout << pc2 << std::endl;

    A a;
    B b;
    A *pa = reinterpret_cast<A*>(&b);
    B *pb = reinterpret_cast<B*>(&a);
    pa->printA();
    pb->printB();

    A *pa1 = reinterpret_cast<A*>(pb);
    B *pb1 = reinterpret_cast<B*>(pa);
    pa1->printA();
    pb1->printB();




}