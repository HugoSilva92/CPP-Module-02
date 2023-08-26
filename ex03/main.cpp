#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point const a(3, 4);
	Point const b(4, 7);
	Point const c(6, -3);
	Point const dot(3.5, 3.5);

	if(bsp( a, b, c, dot))
		std::cout << "Its in there!" << std::endl;
	else
		std::cout << "Its outside of the triangle!" << std::endl;
return 0;
}


