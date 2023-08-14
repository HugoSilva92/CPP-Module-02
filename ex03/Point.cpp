#include "Point.hpp"

Point::Point() : _x(0), _y(0){

}

Point::Point(float const x, float const y) : _x(x), _y(y){

}

Point::Point(Point const & dot) : _x(dot._x), _y(dot._y){

}

Point&   Point::operator=(Point const & dot){
    (Fixed)this->_x = dot._x;
    (Fixed)this->_y = dot._y;
    return *this;
}

Point::~Point(void){

}

int Point::axisX(void)const{
    return _x.toFloat();
}

int Point::axisY(void)const{
    return _y.toFloat();
}
