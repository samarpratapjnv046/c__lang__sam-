#include<iostream>
// #include<vector>
#include<array>
using namespace std;
// void insertionSort(vector<int>&arr,int n){
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[5]={8,9,4,7,2};
    insertionSort(arr,5);
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}
