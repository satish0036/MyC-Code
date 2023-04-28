#include <iostream>

using namespace std;

int main()
{
    // int num=5;
    // cout<<"Enteren number is:"<<num<<endl;
    
    // cout<<"address of num is:"<<&num<<endl; 
    
// makke a pointer of same data type always
    // int *ptr=&num;
    // cout<<"number is:"<<*ptr<<endl;
    
// if you try to print only ptr then you will get address of num
    // cout<<"address is:"<<ptr<<endl;
// *** conclusion is, num and *ptr points to same
// **** and &num and ptr points to address of it
    
    // cout<<"size of num:"<<sizeof(num)<<endl;
    // cout<<"size of pointer:"<<sizeof(ptr)<<endl;
    // cout<<endl;
    
    
    // double var=3.4;
    // double *pointer1=&var;
    
    // cout<<"variable is:"<<var<<endl;
    // cout<<"value is:"<<*pointer1<<endl;
    
    // cout<<"size of var:"<<sizeof(var)<<endl;
    // cout<<"size of pointer1:"<<sizeof(pointer1)<<endl;
    
// we can initialize a pointer in other wey also
    
    // int i=3;
    
    // int *p1=0;
    // p1=&i;
    // cout<<"value is:"<<*p1<<endl;
    // cout<<"address is:"<<p1<<endl;
    
// important 
    // int num=5;
    // int a=num;
    // cout<<"before:"<<num<<endl;
    // a++;
    // cout<<"after:"<<num<<endl;
    
    
    // int *ptr=&num;
    // cout<<"before:"<<num<<endl;
    // (*ptr)++;
    // cout<<"after:"<<num<<endl; //concept of pointer

// coping a pointer;
    // int num=5;
    
    // int *ptr=&num;
    
    // int *ptr1=ptr; //made copy of pointer
    // cout<<*ptr1<<":-value-:"<<*ptr<<endl;
    // cout<<ptr1<<":-address-:"<<ptr<<endl;
    
    // cout<<"before address:"<<ptr<<endl;
    // ptr =ptr+0;
    // cout<<"aftrt address:"<<ptr<<endl;
// question1
    // int p=5;
    // int q=9;
    
    // int *ptr=&p;
    // (*ptr)++;
    // *ptr=q;
    
    // cout<<*ptr<<"f"<<p<<"g"<<q<<endl;
    
// question2
    int n=5;
    int *ptr=0;
    ptr=&n;
    // *ptr=&n;  //it will give error,
    cout<<*ptr<<endl;
    
    
    
    
    return 0;
}
