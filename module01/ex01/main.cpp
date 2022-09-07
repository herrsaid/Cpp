
#include "Zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(8, "said");
    for(int i = 0; i < 8 ; i++)
    {
        std::cout << z[i].getName() << std::endl;
    }
    return 0;
}