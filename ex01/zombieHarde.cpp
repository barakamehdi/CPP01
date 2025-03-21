#include "Zombie.hpp"


Zombie* zombieHarde (int n, std :: string name){
    if (n <= 0)
        return NULL;
    Zombie* child = new Zombie[n];
    for (int i = 0; i < n; ++i) {
        child[i].setName(name);
    }
    return child;
}