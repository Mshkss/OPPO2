#pragma once

#include <vector>;

#include "Color.h"

struct Point
{
	double a, b;
	Color colour;

	Point();
	Point(double _a, double _b, Color _color);
	void print(std::ostream& out) const;

	static Point create(std::istream& in);
	static std::vector<Point> readSome(std::istream& in);
	static void printSome(const std::vector<Point>& points, std::ostream& out);
};

