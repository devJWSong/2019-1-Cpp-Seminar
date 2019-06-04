#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v = {4, 6, 11, 0, 2};
    sort(v.begin(), v.end());

    for (int i=0; i<v.size(); ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end(), greater<int>());

    for (int i=0; i<v.size(); ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}

