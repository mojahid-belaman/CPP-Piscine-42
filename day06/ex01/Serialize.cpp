#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t ui = reinterpret_cast<uintptr_t>(ptr);
    return ui;
}