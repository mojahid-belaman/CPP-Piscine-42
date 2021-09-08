#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T *arr, T len, void  (*dis_cont)());

template<typename T>
void    dis_content(T val);
#endif