#include <iostream>
#include <stdexcept>
#include "Triangle.h"

int main() {
    while (true) {
        double a, h;

        std::cout << "Enter side of a triangle: " << std::endl;
        if (!(std::cin >> a)) {
            std::cout << "Invalid input format. Try again.\n" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
            continue;
        }

        std::cout << "Enter height of a triangle: " << std::endl;
        if (!(std::cin >> h)) {
            std::cout << "Invalid input format. Try again.\n" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
            continue;
        }

        try {
            Triangle first(a, h);
            std::cout << "Area of triangle: " << first.calculateArea() << std::endl;
            break;
        }
        catch (const std::invalid_argument& e) {
            std::cout << "Error: " << e.what() << " Try again.\n" << std::endl;
        }
    }
    return 0;
}
