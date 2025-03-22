#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB :: HumanB (std ::string name){
    this->name = name;
    this->weapon = NULL;
}

void HumanB :: attack(){

    if (this->weapon == NULL)
        std :: cout << this->name << " has no Weapon" << std::endl;

    else 
        std  :: cout << name << " attacks with their " << weapon->getType() << std :: endl;
        

}
#include <cstdio>

void HumanB::SetWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}
HumanB ::~HumanB() {
};
