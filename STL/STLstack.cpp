#include <iostream>
#include <stack>
using namespace std;
// last in first out
int main()
{
    stack <string>s;
    s.push("satish");
    s.push("Nitish");
    s.push("Chotu");
    
    cout<<"Top eleent :"<<s.top()<<endl;
    s.pop();
    cout<<"Top eleent :"<<s.top()<<endl;
    
    cout<<"size of stack :"<<s.size()<<endl;
    
    cout<<"empty or not :"<<s.empty()<<endl;
    return 0;
}
