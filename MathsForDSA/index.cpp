#include <iostream>
using namespace std;
#include <vector>
// check a number is prime or not with time complexity of O(n)
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return 1;
}
// no of prime no till n
int total_prime_no_till_n(int n){
    int count=0;
    for(int i=0; i<n+1;i++){
        if(isPrime(i)){
            count+=1;
        }
    }
    return count;
}
//smaller prime factor of a number excluding n
int smallPrimeFactor(int n){
    vector<bool> prime(n+1,true);
    for(int i=2;i<n;i++){
        if(prime[i]){
            if(n%i==0){
                return i;
            }
            for(int j=i*2;j<n;j=j+1){
                prime[j]=false;
            }
        }
    }
    return -1;
}
    
//Sieve of eratos theorm to count no of prime till n;
int No_of_prime_till_n(int n){
    int count1=0;
    vector<bool> prime(n+1,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            count1 +=1;
            for(int j=2*i;j<=n;j=j+i){
                prime[j]=false;
            }
           
        }
    }
    return count1; //including n
}
// printing all small prime factor given number using sieve of eratos
void print_all_prime_factor(int n){
    vector<int>arr(n+1,1);
    for(int i=2;i<=n;i++){
        arr[i]=i;
    }
    for(int i=2;i<=n;i++){
        if (arr[i]==i){
            for(int j=i*i;j<=n;j=j+i){
                if(arr[j]==j){
                   arr[j]=i; 
                }
                
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     cout<<i<<"->"<<arr[i]<<endl;
    // }
    while(n!=1){
        cout<<arr[n]<<" ";
        n=n/arr[n];
    }
}
int main()
{
    cout<<"enter a number: "<<endl;
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }

    // cout<<"no of prime no till "<<n<<" is :"<<total_prime_no_till_n(n)<<endl;  //brut forse
    

    cout<<"no of prime no till "<<n<<" is :"<<No_of_prime_till_n(n)<<endl; //Sieve of eratos theorm

    
    cout<<"smallest prime factor of "<<n<<" is:"<<smallPrimeFactor(n)<<endl;  //Sieve of eratos theorm
    cout<<"prime factor of "<<n<<" is:";
    print_all_prime_factor(n);
  

    return 0;
}
