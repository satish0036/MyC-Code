
#include <iostream>
#include<array>
using namespace std;
// STL array is impleented by fixed size static array
int main()
{
  array<int ,4>a={1,2,3,4};
  int size=a.size();
  cout <<"size of array : "<<size<<endl;
  for (int i=0;i<size;i++){
      cout<<a[i]<<" ";
  }
  cout<<endl;
  
  cout<<"element at 2nd index : "<<a.at(2)<<endl;
  
  cout<<"arr is emmpty or not :"<<a.empty()<<endl;
  
  cout<<"first element :"<<a.front()<<endl;
  cout<<"last element :"<<a.back()<<endl;
}
