#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(Fixed(5) * Fixed(5.50f));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	//some of my tests:
	std::cout << "Test one: ";
	std::cout << a.min(a, c) << std::endl;
	std::cout << "Test two: ";
	std::cout << Fixed::max(c, a) << std::endl;
	std::cout << "Test three: ";
	std::cout << a + c << std::endl;
	std::cout << "Test four: ";
	std::cout << a + ++c << std::endl;
	return 0;
}


