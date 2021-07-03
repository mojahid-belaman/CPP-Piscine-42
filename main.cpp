
#include<iostream>
// using namespace std;
  
// // A class without user defined assignment operator
// class Test
// {
//     int *ptr;
// public:
//     Test (int i = 0)      { ptr = new int(i); }
//     Test operator=(Test const & t)
//     {
//         *ptr = *(t.ptr);
//         return (*this);
//     }
//     Test(Test const &t)
//     {
//         *ptr = *(t.ptr);
//     }
//     void setValue (int i) { *ptr = i; }
//     void print()          { cout << *ptr << endl; }
// };
  
int main()
{
    // float x = 0.333 + 0.333;
    float x = 1234.4321f;
    std::cout << x << std::endl;
    return 0;
}