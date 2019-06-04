#include <iostream>

using namespace std;

class Point2D {
    public: 
        float x;
        float y;

        Point2D(float _x, float _y) {
            x = _x;
            y = _y;
        }

        void check() {
            cout<<"(x, y) = ("<<x<<", "<<y<<")"<<endl;
        }
};

class Point3D: public Point2D {
    public:
        float z;

        Point3D(float _x, float _y, float _z):Point2D(_x, _y) {
            z = _z;
        }

        void check() {
            cout<<"(x, y, z) = ("<<x<<", "<<y<<", "<<z<<")"<<endl;
        }
};

int main() {

    Point3D p(3.4, 6.7, 9.8);
    p.check();

    return 0;
}