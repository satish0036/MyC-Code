#include <iostream>
#include<set>
using namespace std;
// it stors unique eleent
// it is implented using BST
int main()
{
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    
    cout<<"before erase"<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    // s.erase(s.begin());
    set<int>::iterator it =s.begin();
    it++;
    s.erase(it);
    cout<<"after erase"<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"6 is present or not : "<<s.count(6)<<endl;//count will say it is present or not

    return 0;
}
