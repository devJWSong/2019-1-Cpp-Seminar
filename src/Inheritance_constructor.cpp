#include <iostream>

using namespace std;

class Parent {
    public:
        int n;

        Parent(int _n) {
            cout<<"Parent constructor is called."<<endl;
            n = _n;
            cout<<"n is initialized."<<endl;
        }  
};

class Child: public Parent {
    public:
        Child(int _n):Parent(_n) {
            cout<<"Child constructor is called."<<endl;
        }
};

int main() {

    Child c(5);

    cout<<c.n<<endl;

    return 0;
}