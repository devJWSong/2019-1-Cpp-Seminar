#include <iostream>

using namespace std;

int main() {

    char *str;
    int n;

    cin>>n;

    str = new char[n];

    cin>>str;
    cout<<str<<endl;

    delete[] str;
    str = NULL;

    return 0;
}