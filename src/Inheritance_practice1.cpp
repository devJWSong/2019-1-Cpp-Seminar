#include <iostream>

using namespace std;

class Car {
    public:
        int speed;
        int size;
};

class MyCar:public Car {
    public:
        int age;

        int getSpeed() {
            return speed - age*2;
        }
};

int main() {

    MyCar myCar;
    myCar.speed = 10;
    myCar.size = 5;

    myCar.age = 3;

    cout<<myCar.getSpeed()<<endl;

    return 0;
}