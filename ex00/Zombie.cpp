#include "Zombie.hpp"

void Zombie :: SetZombie (std :: string name){
    this->name = name;
}
void GetZombie (){
    return name;
}
Zombie :: ~Zombie (){
    std :: cout << "Zombie" << name << "is Destroyed" << std :: endl;
}

void Zombie :: announce () {

    std :: cout << name << "BraiiiiiiinnnzzzZ..." << std :: endl;
}
