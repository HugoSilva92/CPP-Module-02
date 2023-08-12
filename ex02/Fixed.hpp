#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		float	_num;
		static const int _cnum = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & num);
		Fixed& operator= (Fixed const & num);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const ;
};

std::ostream & operator<<(std::ostream & out, Fixed const & num);

#endif
