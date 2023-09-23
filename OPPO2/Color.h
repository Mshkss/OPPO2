#pragma once

#include <string>

enum class Color {
	Red, Green, Blue
};

Color string_to_color(const std::string& str);
std::string color_to_string(const Color c);