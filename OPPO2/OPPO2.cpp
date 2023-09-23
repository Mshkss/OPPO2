#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Color.h"
#include "Point.h"

using namespace std;

int main()
{
	ifstream in("Текст.txt");
	if (false == in.is_open()) {
		cout << "1";
		return {};
	}

	auto points = Point::readSome(in);
	Point::printSome(points, std::cout);
}