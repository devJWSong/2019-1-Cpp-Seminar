#include <iostream>
#include <cmath>

using namespace std;

class Point2D {
    public:
        float x, y;

        float distance() {
            return sqrt(x*x + y*y);
        }
};

class Point3D:public Point2D {
    public:
        float z;

        float distance() {
            return sqrt(x*x + y*y + z*z);
        }
};

int main() {

    Point3D p;
    p.x = 5.5;
    p.y = 3.1;
    p.z = 1.1;

    cout<<p.distance()<<endl;

    return 0;
}