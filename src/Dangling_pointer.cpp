#include <iostream>

using namespace std;

int main() {

    int *arr = new int[10];
    arr[5] = 10;

    delete arr;

    cout<<arr[5]<<endl;

    return 0;
}