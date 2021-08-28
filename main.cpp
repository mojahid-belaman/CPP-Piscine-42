#include <iostream>
#include <fstream>

class test
{
private:
    std::string const _name;
    int _grade;
public:
    test()
    {
        std::cout << "Constructor Default\n";
    }
    test(std::string name, int grade) : _name(name)
    {
        _grade = grade;
    }

    test(test &copy) : _name(copy._name)
    {
        std::cout << "Constructor the copy" << std::endl;
        *this = copy;
    }

    test &operator= (test &new_tst)
    {
        std::cout << "Assignement operator" << std::endl;
        if (this != &new_tst)
            this->_grade = new_tst._grade;
        return (*this);
    }
    void    display()
    {
        std::cout << "name = " + _name << "\ngrade = " << _grade << std::endl;
    }
    ~test()
    {
        return ;
    }
};

int main()
{
    test t1("Mojahid", 1337);
    t1.display();
    test t2 = t1;
    t2.display();

}
