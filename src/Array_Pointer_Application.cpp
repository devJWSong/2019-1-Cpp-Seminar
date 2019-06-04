#include <iostream>

using namespace std;

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int *p=arr; p-arr<10; ++p) {
        cout<<*p<<endl;
    }

    for (int *p=&arr[0]; p<&arr[10]; ++p) {
        cout<<*p<<endl;
    }

    for (int i=0; i<10; ++i) {
        cout<<*(arr+i)<<endl;
    }

    return 0;
}