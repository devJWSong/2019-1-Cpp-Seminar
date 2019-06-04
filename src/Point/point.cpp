#include <iostream>
#include <cmath>

#include "point.h"

using namespace std;

Point3D::Point3D(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

float Point3D::getDistance() {
    return sqrt(x*x + y*y + z*z);
}

void Point3D::check() {
    cout<<"The coord of the point is ("<<x<<", "<<y<<", "<<z<<")."<<endl;
}

