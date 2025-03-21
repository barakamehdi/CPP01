#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class   Zombie{

    private :
        std :: string name;
    
    public : 

            Zombie();
            ~Zombie ();
            void anounnce ();
            void setName (std::string name);
            std::string getName();
};
Zombie* zombieHarde (int n, std :: string name);
#endif