#include "Zombie.hpp"

void Zombie :: setName(std :: string name ){
        this->name = name;
}

std::string Zombie :: getName(){
    return name;
}

Zombie ::Zombie(){
    std :: cout << "this " << name << "has been created" << std:: endl;
}

Zombie :: ~Zombie() {

    std :: cout << "this " << name << "has been deleted" << std:: endl;
}
void Zombie :: anounnce(){

    std :: cout << name  << ": BraiiiiiiinnnzzzZ..." << std:: endl;
}