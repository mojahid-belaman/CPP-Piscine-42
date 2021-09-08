#include "Serialize.hpp"

int main()
{
    Data *t_data = new Data;
    t_data->str1 = "hello";
    t_data->nb = 1337;
    t_data->str2 = "world";
    std::cout << t_data << "\t" << t_data->str1 + ", " << t_data->nb << ", " + t_data->str2 << std::endl;

    std::cout << "Call Function Serialize()" << std::endl;
    uintptr_t ui = serialize(t_data);
    std::cout << &ui << "\t" << ui << std::endl;

    std::cout << "Call Function Deserialize()" << std::endl;
    t_data = deserialize(ui);
    std::cout << t_data << "\t" << t_data->str1 + ", " << t_data->nb << ", " + t_data->str2 << std::endl;
    

}