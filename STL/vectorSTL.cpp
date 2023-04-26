#include <iostream>
#include <vector>
using namespace std;
// vector is dynamic array
// size of new vector default is 0
// capacity of new vector default is 0
// vector doubled its capacity ehen it get full
int main()
{
   vector<int>v;
    cout<<"size of vector : "<<v.size()<<endl;
    cout<<"capacity of vector : "<<v.capacity()<<endl;
    
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"size of vector : "<<v.size()<<endl;
    cout<<"capacity of vector : "<<v.capacity()<<endl;
    
    cout<<"element at 2nd index :"<<v.at(2)<<endl;
    cout<<"front eleent :"<<v.front()<<endl;
    cout<<"back element :"<<v.back()<<endl;
    
 
    
    cout<<"before pop"<<endl;
    for (int i:v){
        cout<<i<< " ";
    }
    cout<<endl;
    cout<<"after pop"<<endl;
    v.pop_back();
    for (int i:v){
        cout<<i<< " ";
    }
    cout<<endl;
    v.clear();// size of vector will be zero ,but capacity will remain same
     cout<<"size of vector : "<<v.size()<<endl;
    cout<<"capacity of vector : "<<v.capacity()<<endl;
    
    
    // vector<int>a(size,initliazer)
    vector<int>a(5,66);  
    for(int i:a){
        cout<<i<<" ";
        }
    cout<<endl;
    vector<int>lastVector(a);//  to copy vector from another vctor
    for(int i:lastVector){
        cout<<i<<" ";
        }
    cout<<endl;
    
    
    return 0;
    
}
