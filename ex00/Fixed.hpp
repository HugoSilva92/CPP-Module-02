#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int	_fixedPoint;
		static const int _fractionalBit = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & num);
		Fixed& operator= (Fixed const & num);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & out, Fixed const & num); //not needed, just good pratice;

#endif
