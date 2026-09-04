#pragma once
class Triangle {
	double side, height;
public:
	Triangle(double side, double height);
	double area();
	void setSide(double side);
	void setHeight(double height);
	double getSide();
	double getHeight();
};