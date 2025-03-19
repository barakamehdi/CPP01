#include "Zombie.hpp"


Zombie* newZombie(std ::string name);
void randomChump(std :: string name);
int main(){
    Zombie* heapZombie = newZombie("HEAP :");
    heapZombie->announce();
    delete heapZombie;
    randomChump("STACK :");
}