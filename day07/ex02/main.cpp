#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    _arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_n = n;
    for (int i = 0; i < n; i++)
    {
        _arr = new T[n];
    }
}

template <typename T>
Array<T>::Array(Array const &arr)
{
    *this = arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &arr)
{
    if (this != &arr)
    {
        for (size_t i = 0; i < _n; i++)
        {
            this->_arr[i] = arr._arr[i];
        }
    }
}
template <typename T>
T &Array<T>::operator new[](std::size_t n)
{

}


int main()
{
    int *ptr = new int[2];
    ptr[0] = 1337;
    ptr[1] = 42;
    std::cout << ptr[0] << ptr[1] << std::endl;    
    return (0);
}