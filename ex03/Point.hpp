#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

//Class that creates a point on the x and y axis so we can connect our triangle.

class Point{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point();
        Point(float const x, float const y);
        Point(Point const & dot);
        Point& operator= (Point const & dot);
        ~Point();

        float axisY(void)const;
        float axisX(void)const;
};

#endif
