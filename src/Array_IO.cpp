#include <iostream>

using namespace std;

int main() {

    // arr[1] = 5;
    // arr[2] = 1;
    // arr[3] = 4;
    // arr[4] = 7;
    // arr[5] = 2;

    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;
    // cout<<arr[5]<<endl;
    
    int arr[5];

    for (int i=0; i<5; ++i) {
        cin>>arr[i];
    }

    for (int i=0; i<5; ++i) {
        cout<<arr[i]<<endl;
    }

    return 0;
}