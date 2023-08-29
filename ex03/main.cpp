#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

//grafical example for triangle and to see where the points are:
//https://www.easycalculation.com/analytical/draw-triangle.php

int main( void ) {
	Point const a(-2, 5);
	Point const b(1, 3);
	Point const c(4, 4);
	Point const dot(-1, 4.5);

	if(bsp( a, b, c, dot))
		std::cout << "Its in there!" << std::endl;
	else
		std::cout << "Its outside of the triangle!" << std::endl;
return 0;
}


