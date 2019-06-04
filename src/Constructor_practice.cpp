#include <iostream>

using namespace std;

class Rectangle {
    private:
        int a;
        int b;
        int size;

    public:
        Rectangle() {
            a = 1;
            b = 1;
            size = a * b;
        }

        Rectangle(int n) {
            a = n;
            b = n;
            size = a * b;
        }

        Rectangle(int n1, int n2) {
            a = n1;
            b = n2;
            size = a * b;
        }

        int getSize() {
            return size;
        }

        int getLongerSide() {
            if (a >= b) {
                return a;
            } else {
                return b;
            }
        }
};

int main() {

    Rectangle rec1;
    Rectangle rec2(3);
    Rectangle rec3(4, 5);

    cout<<rec1.getLongerSide()<<endl;
    cout<<rec1.getSize()<<endl;

    cout<<rec2.getLongerSide()<<endl;
    cout<<rec2.getSize()<<endl;

    cout<<rec3.getLongerSide()<<endl;
    cout<<rec3.getSize()<<endl;

    return 0;
}