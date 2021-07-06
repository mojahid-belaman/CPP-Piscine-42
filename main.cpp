// #include <iostream>

// class Unary
// {
// private:
//     int _x, _y;
// public:
//     Unary(int x, int y)
//     {
//         this->_x = x;
//         this->_y = y;
//     }
//     Unary();
//     void    show_data()
//     {
//         std::cout << _x << "\t" << _y << std::endl;
//     }
//     Unary operator++()
//     {
//         this->_x++;
//         this->_y++;
//         return (*this);
//     }
//     Unary operator++(int)
//     {
//         Unary u;
//         u = *this;
//         _x++;
//         _y++;
//         return (u);
//     }
//     ~Unary();
// };

// Unary::Unary(/* args */)
// {
// }

// Unary::~Unary()
// {
// }


// int main()
// {
//     Unary v(10, 20), k;
//     k = ++v;//11 21
//     // k = v++;// 11 21
//     // k.show_data();// 11 21
//     k.show_data();//12 22
//     return (0);
// }

#include <iostream>

class test
{
private:
    /* data */
public:
    test(){std::cout << "Constructer Called" << std::endl;}
    test(const test& rhs){std::cout << "copy Called" << std::endl;}
    // test operator= (const test &f)
    // {
    //     std::cout << "Assignation operator called" << std::endl;
    //     return (*this);
    // }
    test& function(const test& rhs);
    ~test(){}
}; 

test& test::function(const test& rhs)
{
    return (*this);
}


int main()
{
    test t1;

    test t2 ;
    t2 = t1.function(t1);
    // t2 = t1.function(t1);
    // t2 = t1.function(t1);
    // t2 = t1.function(t1);
    return (0);
}

