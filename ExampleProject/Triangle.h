#pragma once
class Triangle {
	double side, height;
public:
	Triangle(double side, double height);
	double calculateArea() const noexcept;
	void setSide(double side) noexcept;
	void setHeight(double height) noexcept;
	double getSide() const noexcept;
	double getHeight() const noexcept;
};