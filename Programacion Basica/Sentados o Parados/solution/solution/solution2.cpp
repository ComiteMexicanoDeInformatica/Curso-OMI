#include <iostream>

int main() 
{
	int r, s, b, asientos;
	
	std::cin >> r >> s >> b;
	asientos = r * s;
	
	std::cout << asientos << " "  << b - asientos << std::endl;
}