#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::Fixed(Fixed const &num){
	std::cout << "Copy constructor called" << std::endl;
	*this = num;
}

Fixed&	Fixed::operator= (Fixed const & num){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_num = num.getRawBits();
	return *this;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_num;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_num = raw;
}

std::ostream & operator<<(std::ostream & out, Fixed const & num){
	out << "Num is: " << num.getRawBits();
	return out;
}	//not needed, just good pratice;
