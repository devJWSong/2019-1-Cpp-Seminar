#include <iostream>

using namespace std;

int main() {

    int a = 5;
    float b = 5.5;
    char c = 's';

    int *pa = &a;
    float *pb = &b;
    char *pc = &c;

    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<pa<<endl;
    cout<<"Value of b: "<<b<<endl;
    cout<<"Address of b: "<<pb<<endl;
    cout<<"Value of c: "<<c<<endl;
    cout<<"Address of c: "<<(void*) pc<<endl;

    return 0;
}