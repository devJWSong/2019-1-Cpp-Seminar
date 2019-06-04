#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str[11] = "";

    for (int i=0; i<10; ++i) {
        strcat(str, "a");
        cout<<str<<endl;
    }

    return 0;
}