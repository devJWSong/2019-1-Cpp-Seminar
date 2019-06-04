#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<int> q;
    
    q.push(2);
    q.push(4);
    q.push(6);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    cout<<q.empty()<<endl;

    return 0;
}

