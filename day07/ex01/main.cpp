#include "iter.hpp"

template <typename T>
void   dis_content(T const & val)
{
    std::cout << val << std::endl;
}

template <typename T>
void    iter(T *arr, int len, void func(T const &elem))
{
    for (int i = 0; i < len; i++)
    {
        func(arr[i]);
    }
}
int main()
{
    char arr1[] = {'f', 'r', 'e', 'f'};
    // int arr2[] = {1337, 42, 19, 2021};
    // double arr3[] = {1337.42, 42.1337, 19.42, 2021.5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    iter<char>(arr1, size, dis_content);
    return (0);
}