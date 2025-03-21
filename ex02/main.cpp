#include <iostream>
#include <string>


int main ()
{
    std :: string string = "HI THIS IS BRAIN" ;

    std :: string* stringPTR = &string ;

    std :: string& stringREF = string ;

    std :: cout << "Memory address of string:      " << string << std::endl;
    std :: cout << "Memory address held by stringPTR      " << &stringPTR << std::endl;    
    std :: cout << "Memory address held by stringREF      " << stringREF << std::endl;
    std :: cout << "The value of the string is :          " << string << std::endl;
    std :: cout << "The value Pointed  to stringPTR is :  " << &stringPTR << std::endl;    
    std :: cout << "The value Pointed  to stringREF is :  " << stringREF << std::endl;

}