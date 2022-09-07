
#ifndef WEAPON_HPP

#define WEAPON_HPP

#include <iostream>

class Weapon{
    public:
        Weapon();
        ~Weapon();
        const std::string &getType();
        void    setType( std::string tp );
    private:
        std::string type;
};

#endif