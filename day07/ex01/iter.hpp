#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T *arr, int len, void (*func)(T const &elem));

template<typename T>
void    dis_content(T const &val);

#endif