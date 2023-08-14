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
		bool operator== (Fixed const & num)const;
		bool operator>= (Fixed const & num) const;
		bool operator> (Fixed const & num) const;
		bool operator<= (Fixed const & num) const;
		bool operator< (Fixed const & num) const;
		bool operator!= (Fixed const & num) const;
		Fixed operator* (Fixed const & num) const;
		Fixed operator/ (Fixed const & num) const;
		Fixed operator+ (Fixed const & num) const;
		Fixed operator- (Fixed const & num) const;
		Fixed& operator++ (void);
		Fixed operator++ (int);
		Fixed& operator-- (void);
		Fixed operator-- (int);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const ;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		const static Fixed& min(Fixed const & numA, Fixed const & numB);
		static Fixed& min(Fixed& numA, Fixed& numB);
		const static Fixed& max(Fixed const & numA, Fixed const & numB);
		static Fixed& max(Fixed& numA, Fixed& numB);
};

std::ostream & operator<<(std::ostream & out, Fixed const & num);

#endif
