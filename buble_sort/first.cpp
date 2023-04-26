#include <iostream>

using namespace std;
void printArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
        
    }
}
int main()
{
  int arr[100]={6,5,4,3,2};
  printArr(arr,5);
  bubbleSort(arr,5);
  printArr(arr,5);

    return 0;
}