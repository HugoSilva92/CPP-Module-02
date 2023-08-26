#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

//This time learned about all the operators overload (arithmetic, comparisson and icrement/decrement)
//Also the way to see what obj of the class is the min or max

class Fixed{
	private:
		int					_fixedPoint;
		static const int	_fractionalBit = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & num);
		Fixed& operator= (Fixed const & num);
		bool operator== (Fixed const & num)const;		//return true if they re equal
		bool operator>= (Fixed const & num) const;		//return true if the first obj is bigger or equal to the second
		bool operator> (Fixed const & num) const;		//return true if the first obj is bigger
		bool operator<= (Fixed const & num) const;		//return true if the second obj is bigger or equal to the first
		bool operator< (Fixed const & num) const;		//return true if the second obj is bigger
		bool operator!= (Fixed const & num) const;		//return true if they re different
		Fixed operator* (Fixed const & num) const;		//multiply one obj for another
		Fixed operator/ (Fixed const & num) const;		//divide one obj for another
		Fixed operator+ (Fixed const & num) const;		//sum of the two objs
		Fixed operator- (Fixed const & num) const;		//subtraction of the two objs
		Fixed& operator++ (void);						//pre-incrementation
		Fixed operator++ (int);							//pos-incrementation
		Fixed& operator-- (void);						//pre-decrementation
		Fixed operator-- (int);							//pos-decrementation
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		float	toFloat(void) const;					//setting the number as float
		int		toInt(void) const ;						//setting the number as integer
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		const static Fixed& min(Fixed const & numA, Fixed const & numB);		//returns the smallest reference to constant obj
		static Fixed& min(Fixed& numA, Fixed& numB);							//returns the smallest reference to obj
		const static Fixed& max(Fixed const & numA, Fixed const & numB);		//returns the bigger reference to constant obj
		static Fixed& max(Fixed& numA, Fixed& numB);							//returns the bigger reference to obj
};

std::ostream & operator<<(std::ostream & out, Fixed const & num);

#endif
