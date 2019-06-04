#include <iostream>

using namespace std;

int sum(int a, int b) {
    static int count = 0;
    ++count;
    cout<<"Value of Count: "<<count<<endl;

    return a+b;
}

int main() {

    int a = 2;
    int b = 5;

    cout<<sum(a, b)<<endl;

    ++a;
    ++b;

    cout<<sum(a, b)<<endl;

    return 0;
}