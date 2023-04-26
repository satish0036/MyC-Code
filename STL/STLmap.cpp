#include <iostream>
#include<map>
using namespace std;
// it stores data in the form of key value
int main()
{
    map<int,string>m;
    m[1]="satish";
    m[2]="Nitish";
    m[3]="Chotu";
    
    m.insert({5,"bheem"});
    cout<<"before erase"<<endl;
    for(auto i :m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"after erase"<<endl;
    m.erase(2);
    for(auto i :m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;
    
    cout<<"finding 5 : "<<m.count(5)<<endl;
    
    auto it=m.find(1);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}
