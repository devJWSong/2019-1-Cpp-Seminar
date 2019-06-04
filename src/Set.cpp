#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> s;

    s.insert(5);
    s.insert(10);
    s.insert(3);

    set<int>::iterator iter;
    for (iter = s.begin(); iter != s.end(); ++iter) {
        cout<<*iter<<" ";
    }
    cout<<endl;

    return 0;
}

