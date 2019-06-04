#include <iostream>

using namespace std;

int A(int a) {
    return a;
}

int A(string str) {
    return str.size();
}

int A(int a, string str) {
    return a + str.size();
}

int main() {

    cout<<A(5)<<endl;
    cout<<A("Jaewoo Song")<<endl;
    cout<<A(5, "Jaewoo Song")<<endl;

    return 0;
}