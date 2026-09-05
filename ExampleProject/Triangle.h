#pragma once
class Triangle {
	double side, height;
public:
	Triangle(double side, double height);
	double area() const ;
	void setSide(double side);
	void setHeight(double height);
	double getSide() const;
	double getHeight() const;
};