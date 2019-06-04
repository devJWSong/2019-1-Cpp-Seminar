#include <iostream>
#include <utility>

using namespace std;

class A {
    public:
        int a;
        int b;

        A(int _a, int _b) {
            a = _a;
            b = _b;
        }
};

int main() {

    pair<int, float> p1(1, 5.5);
    pair<int, A> p2(5, A(5,6));

    cout<<p1.first<<" "<<p1.second<<endl;

    return 0;
}

