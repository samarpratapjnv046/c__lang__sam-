#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[minindex]>arr[j]){
            minindex=j;
        }
        swap(arr[i],arr[minindex]);
    }
}
}
int main(){
    int arr[10]={1,2,3,6,5,4,78,9,6,3};
    selectionsort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}