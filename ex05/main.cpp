#include "Harl.hpp"

int main() {
    Harl harl;
    
    std::cout << "Calling DEBUG level:" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "\nCalling INFO level:" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\nCalling WARNING level:" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\nCalling ERROR level:" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "\nCalling invalid level:" << std::endl;
    harl.complain("INVALID");
    
    return 0;
}