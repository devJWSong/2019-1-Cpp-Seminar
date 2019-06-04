#include <iostream>

using namespace std;

typedef struct Point{

    int x;
    int y;

} Point;

int main() {

    Point p = {1, 0};

    cout<<"Coordinate (x,y) = ("<<p.x<<","<<p.y<<")"<<endl;

    return 0;
}