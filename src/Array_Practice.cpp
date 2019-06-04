#include <iostream>

using namespace std;

int main() {

    int n = 0;
    scanf("%d", &n);

    int arr[n][n];

    for (int i=0; i<n; ++i) {
        int r = i+1;
        for (int j=0; j<n; ++j) {
            arr[i][j] = r * (j+1);
        }
    }

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}