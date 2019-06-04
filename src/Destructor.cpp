#include <iostream>

using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string str, int n) {
            name = str;
            age = n;
        }

        ~Person() {
            cout<<"The person named "<<name<<" died!"<<endl;
        }

        void introduce() {
            cout<<"My name is "<<name<<endl;
        }

        void getOld() {
                ++age;
        }
};

int main() {

    Person *me = new Person("Jaewoo Song", 26);

    me->introduce();
    cout<<me->age<<endl;

    delete me;

    cout<<"The end"<<endl;

    return 0;
}