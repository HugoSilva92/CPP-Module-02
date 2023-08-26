#include "Point.hpp"

//https://www.cuemath.com/geometry/area-of-triangle-in-coordinate-geometry/
//https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/

// Area cant be negative
float   absArea(float nr){
    if (nr < 0)
        return nr * -1;
    return nr;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    float ax, ay, bx, by, cx, cy, pointx, pointy;

    ax = a.axisX();
    ay = a.axisY();
    bx = b.axisX();
    by = b.axisY();
    cx = c.axisX();
    cy = c.axisY();
    pointx = point.axisX();
    pointy = point.axisY();

    float total = absArea((ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2);
    //now we ve got to know the area between the a b c with the point
    //if that sum is equal to our total then the point is within the triangle
    float abpoint = absArea((ax * (by - pointy) + bx * (pointy - ay) + pointx * (ay - by)) / 2);
    float acpoint = absArea((ax * (cy - pointy) + cx * (pointy - ay) + pointx * (ay - cy)) / 2);
    float bcpoint = absArea((bx * (cy - pointy) + cx * (pointy - by) + pointx * (by - cy)) / 2);
    if (!abpoint || !acpoint || !bcpoint)
        return false;
    if (total == (abpoint + acpoint + bcpoint))
        return true;
    return false;
}
