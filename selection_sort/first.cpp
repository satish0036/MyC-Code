#include <iostream>

using namespace std;
void printArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
int main()
{
  int arr[100]={6,2,8,4,10};
  printArr(arr,5);
  selectionSort(arr,5);
  printArr(arr,5);

    return 0;
}