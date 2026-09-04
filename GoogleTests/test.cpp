#include "pch.h"
#include "Triangle.h"

TEST(TriangleTests, areaTest) {
	Triangle first(5, 5);
	EXPECT_DOUBLE_EQ(first.area(), 12.5);
}

TEST(TriangleTests, throwTest1) {
	EXPECT_THROW(Triangle first(-5, 5), std::invalid_argument);
}
TEST(TriangleTests, throwTest2) {
	EXPECT_THROW(Triangle first(0, 5), std::invalid_argument);
}

TEST(TriangleTests, setSideTest) {
	Triangle first(5, 5);
	first.setSide(4);
	EXPECT_EQ(first.getSide(), 4);
}

TEST(TriangleTests, setHeightTest) {
	Triangle first(5, 5);
	first.setHeight(8);
	EXPECT_EQ(first.getHeight(), 8);
}

TEST(TriangleTests, areaChangeTest) {
	Triangle first(5, 5);
	first.setSide(10);
	first.setHeight(4); 
	EXPECT_DOUBLE_EQ(first.area(), 20.0);
}