#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> m;

    m.insert(pair<int, int> (1, 2));
    m.insert(pair<int, int> (2, 4));
    m.insert(pair<int, int> (3, 6));

    map<int, int>::iterator iter;
    for (iter = m.begin(); iter != m.end(); ++iter) {
        cout<<iter->first<<" "<<iter->second<<endl;
    }

    return 0;
}

