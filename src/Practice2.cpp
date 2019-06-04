#include <iostream>

using namespace std;

int main() {
    int arr[5];

    for (int i=0; i<5; ++i) {
        cin>>arr[i];
    }

    int sum = 0;
    for (int i=0; i<5; ++i) {
        sum += arr[i];
    }

    cout<<sum/5.0<<endl;

    return 0;
}