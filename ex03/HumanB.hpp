#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "Weapon.hpp"
class Weapon;

class HumanB {

    private  :
        std :: string name ;
        Weapon* weapon ;

        public :
            void attack();
            HumanB(std::string name);
            void SetWeapon(Weapon& weapon);
            ~HumanB();
            
            
        };
        #endif 