#include <iostream>

using namespace std;

int main() {
    int b = 100;

    switch (b)
    {
        case 5:
            cout<<"b is 5"<<endl;
            break;
        case 10:
            cout<<"b is 10"<<endl;
            break;
        case 15:
            cout<<"b is 15"<<endl;
            break;
        default:
            cout<<"I don't know"<<endl;
            break;
    }

    return 0;
}