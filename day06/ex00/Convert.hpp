#ifndef CONVERT_H
#define CONVERT_H

#include <iomanip>
#include <string>
#include <iostream>
#include <cmath>
#include <limits>
#include <ctype.h>

void    Convert_char(std::string str, int &err);
void    Convert_int(std::string str);
void    Convert_float(std::string str);
void    Convert_double(std::string str);
bool    is_scientific(std::string str);
int     check_float(std::string str);
int     check_double(std::string str);
int     check_int(std::string str);
bool    is_scientific_f(std::string _str);
#endif