#include "ScavTrap.hpp"

int main()
{
    ClapTrap ct("Ayoub");
    ScavTrap st("test");
    ct.attack("Mohamed");
    st.attack("Yassir");
    st.guardGate();
    return 0;
}