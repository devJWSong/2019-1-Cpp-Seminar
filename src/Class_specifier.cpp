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
};

int main() {

    Point p;
    
    p.setX(1);
    p.setY(0);

    int x = p.getX();
    int y = p.getY();

    cout<<"Coordinate (x,y) = ("<<x<<","<<y<<")"<<endl;

    return 0;
}