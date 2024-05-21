// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string var_1;
    std::cout << "Please, enter your name: " << std::flush;
    std::cin >> var_1;
    std::cout << "Nice to meet you, " << var_1 << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
