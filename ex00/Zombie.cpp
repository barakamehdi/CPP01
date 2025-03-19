#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is Destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetZombie(std::string name) {
    this->name = name;
}

std::string Zombie::GetZombie() {
    return name;
}