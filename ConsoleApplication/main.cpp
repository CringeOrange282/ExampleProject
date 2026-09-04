#include <iostream>
#include "Triangle.h"

int main() {
	while (1) {
		try {
			double a, h, s;
			std::cout << "Enter side of a triangle" << std::endl;
			if (!(std::cin >> a) || a<=0) {
				throw std::invalid_argument("negative number\n");
			}

			std::cout << "Enter height of a triangle" << std::endl;
			if (!(std::cin >> h) || h<=0) {
				throw std::invalid_argument("negative number\n");
			}
			Triangle first(a, h);
			std::cout << "area of triangle:" << first.area();
			break;
		}
		catch (std::invalid_argument) {
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(10, '\n');
			}
		}
	}
}