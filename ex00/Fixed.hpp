#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

//The start of writting classes in Canonical Form:
class Fixed{
	private:
		int					_fixedPoint;
		static const int	_fractionalBit = 8;
	public:
		Fixed(void);									//Default Constructor
		Fixed(Fixed const & num);						//Copy Constructor Obj(Obj)
		Fixed& operator= (Fixed const & num);			//Copy Assignment Operator Overload Obj = Obj
		~Fixed();
		int	getRawBits(void) const;						//getter
		void	setRawBits(int const raw);				//setter
};

std::ostream & operator<<(std::ostream & out, Fixed const & num); //not needed, just good pratice;

#endif
