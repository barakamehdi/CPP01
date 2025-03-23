#include "Zombie.hpp"


int main(){
    Zombie* heapZombie = newZombie("Foo HEAP :");
    heapZombie->announce();
    delete heapZombie;
    randomChump("Foo STACK :");
}