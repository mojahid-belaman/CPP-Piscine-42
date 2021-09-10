#include "easyfind.hpp"

template <typename T>
void    easyfind(T b, int occu)
{
     if (std::find(b.begin(), b.end(), occu) == b.end())
        std::cout << "element " << occu <<  " Not found!" << std::endl;
    else
        std::cout << "element " << occu <<  " is found!" << std::endl;

}

int main()
{
    // int arr[3] = {1337, 42, 19};
    std::array<int, 3> arr = {1337, 42, 19};
    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }
    easyfind(arr, 42);
    std::vector<int> v;
    v.push_back(1337); 
    v.push_back(42); 
    v.push_back(19); 
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }
    easyfind(v, 42);
}