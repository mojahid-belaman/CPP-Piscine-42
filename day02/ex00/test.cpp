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
        this->_var = ts._var;
        std::cout << this << std::endl;
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
    test t2, t3;
    (t2 = t3) = t1;

    t1.print();t2.print();t3.print();//t4.print();
}
