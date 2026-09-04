#include <iostream>
int main() {
	double a, h, s;
	std::cout << "Enter side of a triangle" << std::endl;
		while (!(std::cin >> a) || a <= 0) {
			std::cin.clear();
			std::cin.ignore(10, '\n');
			std::cout << "Enter side of a triangle" << std::endl;
		}
	
	std::cout << "Enter height of a triangle" << std::endl;
		while (!(std::cin >> h) || h <= 0) {
			std::cin.clear();
			std::cin.ignore(10, '\n');
			std::cout << "Enter height of a triangle" << std::endl;
		}
	
	s = a * h / 2;
	std::cout << "area of triangle:" << s;
}