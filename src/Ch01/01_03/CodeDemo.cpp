// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Input your name here: " << std::flush;
    std::cin >> str;
    std::cout << "Here is your name: " << std::flush;
    std::cout << str;

    std::cout << std::endl << std::endl;
    return (0);
}
