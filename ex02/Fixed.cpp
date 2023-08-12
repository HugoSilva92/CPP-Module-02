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
	this->_num = num.toFloat();
	return *this;
}

Fixed::Fixed(const int num){
	std::cout << "Int constructor called" << std::endl;
	this->_num = num;
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
	this->_num = num;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const {
	return _num;
}

int		Fixed::toInt(void) const {
	return roundf(_num);
}

std::ostream & operator<<(std::ostream & out, Fixed const & num){
	out << "Num is: " << num.toFloat();
	return out;
}
