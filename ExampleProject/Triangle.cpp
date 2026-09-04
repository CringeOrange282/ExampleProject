#include "Triangle.h"
#include <iostream>
Triangle::Triangle(double side, double height) {
	setSide(side);
	setHeight(height);
}
double Triangle::area() {
	return this->side * this->height / 2;
}
void Triangle::setSide(double side) {
	if (side <= 0) {
		throw std::invalid_argument("negative number\n");
	}
	this->side = side;
}

void Triangle::setHeight(double height) {
	if (height <= 0) {
		throw std::invalid_argument("negative number\n");
	}
	this->height = height;
}
double Triangle::getSide() {
	return this->side;
}
double Triangle::getHeight() {
	return this->height;
}