#ifndef HUMANA_HPP
#define HUMANA_HPP


#include "Weapon.hpp"



class HumanA {

    private : 
            std :: string name ;
            Weapon& weapon ;

    public :
         HumanA (std::string name);
         void attack ();

};

// HumanA :: HumanA(std :: string name , Weapon&Weapon) : name (name); weapon (weapon){}
#endif