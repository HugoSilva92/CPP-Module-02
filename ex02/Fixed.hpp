#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int	_fixedPoint;
		static const int _fractionalBit = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & num);
		Fixed& operator= (Fixed const & num);
		bool const operator== (Fixed const & num);
		bool const operator>= (Fixed const & num);
		bool const operator> (Fixed const & num);
		bool const operator<= (Fixed const & num);
		bool const operator< (Fixed const & num);
		bool const operator!= (Fixed const & num);
		/* Fixed& operator* (Fixed const & num);
		Fixed& operator/ (Fixed const & num);
		Fixed& operator+ (Fixed const & num);
		Fixed& operator- (Fixed const & num);
		Fixed& operator++ (void);
		Fixed operator++ (int num);
		Fixed& operator-- (void);
		Fixed operator-- (int num); */
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const ;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & out, Fixed const & num);

#endif
