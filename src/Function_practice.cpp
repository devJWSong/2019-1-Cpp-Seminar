#include <iostream>

using namespace std;

int sqaure(int n) {
    int result = n * n;

    return result;
}

int main() {

    int a = 5;
    int result = sqaure(a);

    cout<<result<<endl;

    return 0;
}