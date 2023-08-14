#include "Fixed.hpp"
//			CONSTRUCTORS!
Fixed::Fixed(void){
	this->_fixedPoint = 0;
}

Fixed::Fixed(Fixed const &num){
	*this = num;
}

Fixed&	Fixed::operator= (Fixed const & num){
	this->_fixedPoint = num.getRawBits();
	return *this;
}

Fixed::Fixed(const int num){
	this->_fixedPoint = num << this->_fractionalBit;
}

Fixed::Fixed(const float num){
	this->_fixedPoint = roundf(num * (1 << this->_fractionalBit));
}

Fixed::~Fixed(void){

}

//				CHANGES THE VALUE OF FIXEDPOINT

float	Fixed::toFloat(void) const {
	return ((float)this->_fixedPoint / (1 << this->_fractionalBit));
}

int		Fixed::toInt(void) const {
	return this->_fixedPoint >> this->_fractionalBit;
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