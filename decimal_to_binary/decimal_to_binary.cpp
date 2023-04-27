#include <iostream>
using namespace std;
#include<string>
#include <math.h>
#include<string>
// ********************a to power b*************
int power(int a,int b){
    int ans=1;
    for(int i=0; i<b; i++){
        ans=ans*a;
    }
    return ans;
}
// *****************************decimal to binary********************
int toBinary(int n){
    int binarybit=0;
    int count=0;
    while(n!=0){
        int bit=n&1;   
        binarybit=bit*power(10,count)+binarybit;
        count +=1;
        n=n>>1;
    }
    return binarybit;
}
// ***********************Binary to decimal*****************************
int toDecimal(string bits){
    int count=0;
    int decimal=0;
    int n=bits.length();
    for(int i=n-1;i>=0;i--){
        if(bits[i]=='1'){
            decimal=decimal+pow(2,count);
            count+=1;
        }
        else if(bits[i]=='0'){
            count+=1;
        }
        else{
            cout<<"Invalid input !"<<endl;
            return 0;
        }
    }
  
    return decimal;
    
    
    
}
int main()
{
//   deciml to binary
    int n;
    cout<<"Enter a decimal number:"<<endl;
    cin>>n;
    
    cout<<"Binary bits of "<<n<<" are:"<<toBinary(n)<<endl;
    
//  Binary to decimal
    
    cout<<"Enter binary bits:"<<endl;
    string bits;
    cin>>bits;
    int decimal=toDecimal(bits);
    cout<<"Decimal is:"<<decimal<<endl;
    
    

    return 0;
}