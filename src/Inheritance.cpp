#include <iostream>

using namespace std;

class Parent {
    protected:
        int n;

    public:
        void setN(int _n) {
            n = _n;
        }

        int getN() {
            return n;
        }
};

class Child: public Parent {
    public:
        float m;
};

int main() {

    Parent p;
    Child c;

    c.setN(5);
    c.m = 5.5;

    

    return 0;
}