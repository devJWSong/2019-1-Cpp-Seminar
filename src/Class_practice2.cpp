#include <iostream>

using namespace std;

class Point {

    private:
        int x;
        int y;

    public:
        void setX(int _x) {
            x = _x;
        }

        void setY(int _y) {
            y = _y;
        }

        int getX() {
            return x;
        }

        int getY() {
            return y;
        }

        void moveX() {
            ++x;
        }

        void moveY() {
            ++y;
        }

};

int main() {

    Point p;
    p.setX(0);
    p.setY(0);

    for (int i=0; i<10; ++i) {
        int command;
        cin>>command;
        if (command == 1) {
            p.moveX();
        } else if (command == 2) {
            p.moveY();
        } else {
            cout<<"Type a right digit."<<endl;
            continue;
        }

        cout<<"("<<p.getX()<<","<<p.getY()<<")"<<endl;
    }

    return 0;
}