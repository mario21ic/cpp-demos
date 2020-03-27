#include <iostream>
#include <string>

bool bIsRunning = true;
std::string selected;

int main() {

    while (bIsRunning) {

        std::string input;
        int number;

        std::cout << "You selected: " << selected << std::endl;
        std::cout << "======\n";
        std::cout << "Menu\n";
        std::cout << "======\n";
        std::cout << "1: Fries\n";
        std::cout << "2: Burger\n";
        std::cout << "3: Shake\n";
        std::cout << "======\n";
        std::cout << "Please enter a number 1-3 to view an item price: ";
        getline(std::cin, input);
        number = std::stoi(input);

        switch (number)
        {
        case 1:
            selected = "Fries: $0.99";
            break;

        case 2:
            selected = "Burger: $1.25";
            break;

        case 3:
            selected = "Shake: $1.50";
            break;

        default:
            selected = "Invalid choice";
            break;
        }

        // To clean the screen
        std::cout << "\033[2J\033[1;1H";
    }
}
