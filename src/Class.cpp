#include <iostream>

using namespace std;

class Person {
        public:

            string name;
            int age;

        
            void introduce() {
                cout<<"My name is "<<name<<endl;
            }

            void getOld() {
                ++age;
            }
};

int main() {

    Person me;
    me.name = "Jaewoo Song";
    me.age = 26;

    cout<<me.age<<endl;

    me.getOld();

    cout<<me.age<<endl;

    return 0;
}