#include <iostream>

using namespace std;

class Person {
    public:
        string name;
        int age;

        Person() {
            name = "Nobody";
            age = 0;
        }

        Person(string str, int n) {
            name = str;
            age = n;
        }

        void introduce() {
            cout<<"My name is "<<name<<endl;
        }

        void getOld() {
                ++age;
        }
};

int main() {

    Person me("Jaewoo Song", 26);
    Person you;

    cout<<me.age<<endl;
    cout<<you.age<<endl;

    me.getOld();
    you.getOld();

    cout<<me.age<<endl;
    cout<<you.age<<endl;
    me.introduce();
    you.introduce();

    return 0;
}