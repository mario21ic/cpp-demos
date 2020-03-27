#include <iostream>
#include <string>

#define GROUP_1_BRACKET 18
#define GROUP_2_BRACKET 28
#define GROUP_1_NAME "A"
#define GROUP_2_NAME "B"
#define GROUP_3_NAME "C"

std::string getGroup(int age) {
    if (age <= GROUP_1_BRACKET) {
        return GROUP_1_NAME;
    } else if (age <= GROUP_2_BRACKET) {
        return GROUP_2_NAME;
    }
    
    return GROUP_3_NAME;
}

int main() {
    std::string name;
    int age;
    
    std::cout << "Please enter your name: ";
    getline(std::cin, name);
    std::cout << "And please enter your age: ";
    std::cin >> age;

    std::cout << "\nWelcome " << name << ". You are in Group " << getGroup(age) << std::endl;
}
