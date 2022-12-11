#include "MyCanvas.h"
#include <iostream>
#include <string>

void MyCanvas::set(unsigned int x, unsigned int y, char c)
{
	canvas_array_ptr[y * get_size_x() + x] = c;
}
char MyCanvas::get(unsigned int x, unsigned int y) const
{
	return canvas_array_ptr[y * get_size_x() + x];
}

std::string MyCanvas::to_string() const
{
	std::string result;

	for (unsigned int y = 0; y < size_y; y++)
	{
		for (unsigned int x = 0; x < size_x; x++) {
			result += get(x, y);
		}
		result += '\n';
	}
	std::cout << result;
	return result;
}
void MyCanvas::print() const
{
	std::cout << MyCanvas::to_string() << std::endl;
}
