#include <iostream>

using namespace std;

class Nums {

    public:
        int a;
        int b;

        int sum() {
            return a + b;
        }

};

int main() {

    Nums nums;
    nums.a = 2;
    nums.b = 5;

    cout<<nums.sum()<<endl; 

    return 0;
}