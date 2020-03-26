#include <iostream>
#include <string>

int main()
{
    std::string name;
    // int age;

    std::cout << "Please enter your name: ";
    // std::cin >> name
    getline(std::cin, name);

    std::cout << "Please enter you age: ";
    // std::cin >> age;
    // getline(std::cin, age);
    std::string inputString = "";
    int age = 0;
    getline(std::cin, inputString);
    age = std::stoi(inputString);
    
    int birth = (2020 - age);

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Birth: " << birth << std::endl;


}
