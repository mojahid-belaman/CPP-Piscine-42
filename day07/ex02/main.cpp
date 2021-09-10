#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    _arr = NULL;
    _n = 0;
}

template <typename T>
Array<T>::~Array()
{
    delete [] this->_arr;
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
    this->_arr = new T[n];
    for (unsigned int i = 0; i < n;i++)
    {
        this->_arr[i] = 0;
    }
}

template <typename T>
Array<T>::Array(Array const &arr)
{
    *this = arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
    if (this != &src)
    {
        this->_n = src._n;
        this->_arr = new T[src._n];
        for (unsigned int i = 0; i < this->_n; i++)
        {
            this->_arr[i] = src._arr[i];
        }
    }
    return (*this);
}
template <typename T>
T &Array<T>::operator[](unsigned int n)
{
    if (n >= 0 && n < this->_n)
        return this->_arr[n];
    else
        throw outOflimit();
}

template <typename T>
size_t Array<T>::size()
{
    return this->_n;
}

template <typename T>
const char *Array<T>::outOflimit::what() const throw()
{
    return "this element is out of the limits!";
}

int main()
{
    Array<int> arr_one;
    Array<int> arr_two(3);
    std::cout << "Size arr_one = " << arr_one.size() << std::endl;
    std::cout << "Size arr_two = " << arr_two.size() << std::endl;
    for (size_t i = 0; i < arr_two.size(); i++)
    {
        arr_two[i] = i;
        std::cout << "arr_two[" << i << "] = " << arr_two[i] << std::endl;
    }
    
    arr_one = arr_two;
    std::cout << "Copy Object arr_two in arr_one" << std::endl;
    std::cout << "Size arr_one = " << arr_one.size() << std::endl;
    for (size_t i = 0; i < arr_one.size(); i++)
    {
        std::cout << "arr_one[" << i << "] = " << arr_one[i] << std::endl; 
    }

    try
    {
        std::cout << "When accessing an element with the operator[]" << std::endl;
        std::cout << arr_one[11] << std::endl;
        std::cout << "Success!" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}