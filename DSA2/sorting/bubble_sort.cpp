#include<iostream>
#include<vector>
#include<array>
using namespace std;
// void bubbleSort(vector<int>&arr,int n){
    void bubbleSort(int arr[],int n){
bool swapped=false;
for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped =true;
            }
        }
        if(swapped==false){
    break;
}
}

}
int main(){
 int arr[10]={1,8,9,4,5,6};
 bubbleSort(arr,6);
 for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
 }
}
