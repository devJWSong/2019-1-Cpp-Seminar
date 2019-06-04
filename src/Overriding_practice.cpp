#include <iostream>

using namespace std;

const float pi = 3.141592;

class Circle {
    public:
        float R;

        float getSize() {
            return R * R * pi;
        }
};

class Ring:public Circle {
    public:
        float r;

        float getSize() {
            return (R * R - r * r) * pi;
        }
};

int main() {
    
    Ring ring;
    ring.R = 5;
    ring.r = 3;

    cout<<ring.getSize()<<endl;

    return 0;
}