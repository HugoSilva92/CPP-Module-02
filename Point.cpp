#include "Point.hpp"

Point::Point() : _x(0), _y(0){

}

Point::Point(float const x, float const y) : _x(x), _y(y){

}

Point::Point(Point const & dot) : _x(dot._x), _y(dot._y){

}

Point&   Point::operator=(Point const & dot){
    return *this;
}