#include <iostream>

class Triangle {
	double side, height;
public:
	Triangle(double side, double height){
		setSide(side);
		setHeight(height);
	}
	double area() {
		return this->side * this->height / 2;
	}
	void setSide(double side) {
		if (side <= 0) {
			throw std::invalid_argument("negative number\n");
		}
		this->side = side;
	}

	void setHeight(double height) {
		if (height <= 0) {
			throw std::invalid_argument("negative number\n");
		}
		this->height = height;
	}
	double getSide() {
		return this->side;
	}
	double getHeight() {
		return this->height;
	}
};
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