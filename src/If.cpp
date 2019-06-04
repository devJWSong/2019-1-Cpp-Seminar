#include <iostream>

using namespace std;

int main() {

    int a = 0;

    if (a > 3) {
        cout<<"a>3";
    } else if (a > 1 && a<= 3) {
        cout<<"1<a<=3";
    } else {
        cout<<"a<=1";
    }

    return 0;
}