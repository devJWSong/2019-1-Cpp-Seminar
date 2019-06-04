#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {

    cout<<sum(1, 2)<<endl;
    cout<<sum(2, 5, 6)<<endl;

    return 0;
}