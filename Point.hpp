#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
        Fixed const _x;
        Fixed const _y;
        //Podemos adicionar se for util!
    public:
        Point();
        Point(float const x, float const y);
        Point(Point const & dot);
        Point& operator= (Point const & dot);
        ~Point();
        //Podemos adicionar se for util!
};

#endif