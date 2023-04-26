#include <iostream>
#include <deque>
using namespace std;
// in deque,you can perform push(),pop() at both the end
// it is dynamic
// random access is possible using .at()
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    
    for(int i :d){
        cout<<i<< " ";
    }
    cout<<endl;
    
    // d.pop_back();
    // d.pop_front();
    
    for(int i :d){
        cout<<i<< " ";
    }
    cout<<endl;
    
    cout<<"element at 2d index :"<<d.at(2)<<endl;
    
    cout<<"front : "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;
    
    cout<<"empty or not : "<<d.empty()<<endl;
    
    cout<<"before erase size :"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    // d.erase(d.begin(),d.end());
    cout<<"after erase size :"<<d.size()<<endl;
    

    return 0;
}

