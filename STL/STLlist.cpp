#include <iostream>
#include<list>
using namespace std;
// STL list ade of double linked list
// Direct access is not possible,since it made of doubly linked list
int main()
{
   list<int>l;
   l.push_back(3);
   l.push_back(1);
   l.push_front(2);
//   l.pop_back();
//   l.pop_front();
   cout<<"before erase"<<endl;
   for(int i:l){
       cout<<i<<" ";
   }
   cout<<endl;  
   cout<<"after erase"<<endl;
   l.erase(l.begin());
//   l.erase(l.begin(),l.end());
    for(int i:l){
       cout<<i<<" ";
   }
   cout<<endl;
   
   cout<<"size of list :"<<l.size()<<endl;
   
//   list<<int<<n(l); //to copy list
   list<int>num(5,100);
   for(int i:num){
       cout<<i<<" ";
   }
   cout<<endl;

    return 0;
}
