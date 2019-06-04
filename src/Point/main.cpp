#include <iostream>

#include "point.h"

using namespace std;

int main() {
    Point3D p(1.1, 2.2, 3.3);

    cout<<p.getDistance()<<endl;
    p.check();
}

