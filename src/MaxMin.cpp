#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v = {4, 10, 2, 1, 8};

    cout<<*(max_element(v.begin(), v.end()))<<endl;
    cout<<*(min_element(v.begin(), v.end()))<<endl;

    return 0;
}

