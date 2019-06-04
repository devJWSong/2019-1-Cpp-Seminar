#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str1[] = "This is String 1";
    char str2[20];

    strcpy(str2, str1);

    cout<<str2<<endl;

    return 0;
}