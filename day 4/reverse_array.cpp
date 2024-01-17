#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversearray( int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        end--;
        start++;
    }
}
int main(){
    int arr[]={1,5,4,3,9,8,7,3};
    int arr1[]={8,9,5,6,4,7,2,3,1,8};
    int size=sizeof(arr)/sizeof(int);
    int size1=sizeof(arr1)/sizeof(int);
    reversearray(arr,size);
    reversearray(arr1,size1);
    printarray(arr,size);
     printarray(arr1,size1);

}