#include "Triangle.h"
#include <iostream>
Triangle::Triangle(double side, double height) {
	if (side <= 0 || height <= 0) {
		throw std::invalid_argument("Side and height must be positive numbers");
	}
	this->side = side;
	this->height = height;
}
double Triangle::calculateArea() const noexcept{
	return this->side * this->height / 2;
}
void Triangle::setSide(double side) noexcept{
	if (side <= 0) {
		throw std::invalid_argument("negative number\n");
	}
	this->side = side;
}

void Triangle::setHeight(double height) noexcept{
	if (height <= 0) {
		throw std::invalid_argument("negative number\n");
	}
	this->height = height;
}
double Triangle::getSide() const noexcept{
	return this->side;
}
double Triangle::getHeight() const noexcept{
	return this->height;
}