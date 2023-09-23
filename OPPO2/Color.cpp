#include "Color.h"

using namespace std;

Color string_to_color(const string& str) {
	if (str == "red") {
		return Color::Red;
	}
	else if (str == "green") {
		return Color::Green;
	}
	else if (str == "blue") {
		return Color::Blue;
	}

	return Color::Red;
}

string color_to_string(const Color c)
{
	switch (c)
	{
	case Color::Red: {
		return "red";
	}

	case Color::Blue: {
		return "blue";
	}

	case Color::Green: {
		return "green";
	}
	}

	return {};
}