#include <iostream>

using namespace std;

int fibonacci(int n) {

    if (n == 1 || n == 2) {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);

}

int main() {
    int result = fibonacci(6);

    cout<<result<<endl;

    return 0;
}