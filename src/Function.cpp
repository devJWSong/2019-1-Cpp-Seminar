#include <iostream>

using namespace std;

int getAbsolute(int a, int b) {
    int diff = a - b;
    int result = 0;

    if (diff >= 0) {
        result = diff;
    } else {
        result = (-1) * diff;
    }

    return result;
        
}

int main() {

    int a, b;
    cin>>a>>b;

    int result = getAbsolute(a, b);

    cout<<result<<endl;

    return 0;
}