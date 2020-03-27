#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> names;

void GetNextName()
{
    std::string name;
    std::cout << "Please enter your first name: " << "\n";
    getline(std::cin, name);
    names.push_back(name);
}

int main() {
    GetNextName();
    std::string lastName; 
    int age;
    std::cout << "Please enter your surname: ";
    getline(std::cin, lastName);
    std::cout << "Please enter your age: ";
    std::cin >> age;
    
    std::cout << std::endl;
    std::cout << "Welcome " << names.back() << " " << lastName << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
}