#include <iostream>
#include <queue>
using namespace std;
// first in first out
int main()
{
    queue<string>q;
    q.push("satish");
    q.push("nitish");
    q.push("chotu");
    
    cout<<"first element : "<<q.front()<<endl;
    q.pop();
    cout<<"first element : "<<q.front()<<endl;
    
    cout<<"size of queue : "<<q.size()<<endl;

    return 0;
}
