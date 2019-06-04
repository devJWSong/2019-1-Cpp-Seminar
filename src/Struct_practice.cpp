#include <iostream>

using namespace std;

typedef struct Me{

    string name;
    int age;
    int grade;

} Me;

int main() {

    Me me = {"Jaewoo Song", 26, 4};

    cout<<me.name<<endl;
    cout<<me.age<<endl;
    cout<<me.grade<<endl;

    return 0;
}