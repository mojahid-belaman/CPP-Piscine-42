#include <iostream>

class test
{
private:
    int _var;
    int _nb;
public:
    test(int v, int nb): _var(v), _nb(nb){};
    test();
    ~test();
    test& operator= (const test& ts)
    {
        if (this != &ts)
        this->_var = ts._var;
        std::cout << "Adress t1 from operator: " << &ts << std::endl;
        std::cout << "Adress t2 (this) from operator: " << this << std::endl;
        return (*this);
    }
    void    print()
    {
        std::cout << _var << std::endl;
    }
};

test::test(/* args */)
{
}

test::~test()
{
}

int main()
{
    test t1(10, 1337);
    test t2;
    t2 = t1;

    std::cout << &t1 << std::endl;
    std::cout << &t2 << std::endl;
    t1.print();t2.print();//t3.print();//t4.print();
}
