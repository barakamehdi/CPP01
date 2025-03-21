#include "Zombie.hpp"

int main (){
    int hard = 5;
    Zombie* hardzombie = zombieHarde(hard , "Hardzombie");

    for (int i = 0; i < hard ; i++) {
        hardzombie[i].anounnce();
    }
    delete[] hardzombie;
    return 0;
}