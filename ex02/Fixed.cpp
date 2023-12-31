#include "Fixed.hpp"
//			CONSTRUCTORS!
Fixed::Fixed(void){
	//std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(Fixed const &num){
	//std::cout << "Copy constructor called" << std::endl;
	*this = num;
}

Fixed&	Fixed::operator= (Fixed const & num){
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = num.getRawBits();
	return *this;
}

Fixed::Fixed(const int num){
	//std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = num << this->_fractionalBit;
	//To print it as a float we need to shift to the left nr of bits.
	// 10 * 256 / 256 = 10; so we can print an integer as float!
}

Fixed::Fixed(const float num){
	//std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(num * (1 << this->_fractionalBit));
	// (1 << this->_fractionalBit)(2power8) is the same thing as 256.
	//Seen that out variable is constant, it should't differ"
}

Fixed::~Fixed(void){
	//std::cout << "Destructor called" << std::endl;
}

//				CHANGES THE VALUE OF FIXEDPOINT

float	Fixed::toFloat(void) const {
	return ((float)this->_fixedPoint / (1 << this->_fractionalBit));
	// (1 << this->_fractionalBit)(2power8) is the same thing as 256.
	//Seen that out variable is constant, it should't differ"
}

int		Fixed::toInt(void) const {
	return this->_fixedPoint >> this->_fractionalBit;
	//shift to the right so we can get the integer number
}

//				FIRST FUNCTIONS USED IN PREVIOUS EXERCISES

int	Fixed::getRawBits(void) const {
	return this->_fixedPoint;
}

void	Fixed::setRawBits(int const raw){
	this->_fixedPoint = raw;
}

//				OUTPUT OPERATOR

std::ostream & operator<<(std::ostream & out, Fixed const & num){
	out << num.toFloat();
	return out;
}


//				COMPARISON OPERATORS

bool Fixed::operator== (Fixed const & num) const{
	if (this->_fixedPoint == num._fixedPoint)
		return true;
	return false;
}

bool Fixed::operator>= (Fixed const & num)const{
	if (this->_fixedPoint >= num._fixedPoint)
		return true;
	return false;
}

bool Fixed::operator> (Fixed const & num)const{
	if (this->_fixedPoint > num._fixedPoint)
		return true;
	return false;
}

bool Fixed::operator<= (Fixed const & num)const{
	if (this->_fixedPoint <= num._fixedPoint)
		return true;
	return false;
}

bool Fixed::operator< (Fixed const & num)const{
	if (this->_fixedPoint < num._fixedPoint)
		return true;
	return false;
}

bool Fixed::operator!= (Fixed const & num)const{
	if (this->_fixedPoint != num._fixedPoint)
		return true;
	return false;
}


//				ARITHMETIIC OPERATORS

Fixed Fixed::operator* (Fixed const & num)const{
	return (this->toFloat() * num.toFloat());
}

Fixed Fixed::operator/ (Fixed const & num)const{
	return (this->toFloat() / num.toFloat());
}

Fixed Fixed::operator+ (Fixed const & num)const{
	return (this->toFloat() + num.toFloat());
}

Fixed Fixed::operator- (Fixed const & num)const{
	return (this->toFloat() - num.toFloat());
}

//			INCREMENT DECREMENT OPERATORS

Fixed& Fixed::operator++ (void){
	this->_fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	this->_fixedPoint++;
	return temp;
}

Fixed& Fixed::operator-- (void){
	this->_fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	this->_fixedPoint--;
	return temp;
}

//			FUNCTIONS MIN AND MAX

const Fixed& Fixed::min(Fixed const & numA, Fixed const & numB){
	if (numA < numB)
		return numA;
	return numB;
}
Fixed& Fixed::min(Fixed& numA, Fixed& numB){
	if (numA < numB)
		return numA;
	return numB;
}
const Fixed& Fixed::max(Fixed const & numA, Fixed const & numB){
	if (numA > numB)
		return numA;
	return numB;
}
Fixed& Fixed::max(Fixed& numA, Fixed& numB){
	if (numA > numB)
		return numA;
	return numB;
}