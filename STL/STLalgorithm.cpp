#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    cout<<"finding 5 : "<<binary_search(v.begin(),v.end(),5)<<endl;
    
    cout<<"lower_bound : "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"upper bound : "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    
    int a=3;
    int b=5;
    cout<<"maxi : "<<max(a,b)<<endl;
    cout<<"mini : "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string ancd is : "<<abcd<<endl;
    
    // rotate(start kaha sa hai; start kaha sai kena hai; end kaha hai)
    rotate(v.begin(),v.begin()+3,v.end());
    for(int i :v){
        cout<<i<< " ";
        
    }
    cout<<endl;
    cout<<"sort"<<endl;
    sort(v.begin(),v.end());
    for(int i :v){
        cout<<i<< " ";
        
    }
    cout<<endl;
    
    cout<<endl;
    
    
    return 0;
}
