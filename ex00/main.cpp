#include "Zombie.hpp"


int main(){
    Zombie* heapZombie = newZombie("HEAP :");
    heapZombie->announce();
    delete heapZombie;
    randomChump("STACK :");
}