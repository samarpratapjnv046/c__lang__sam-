#include<iostream>
using namespace std;
void print(int arr[],int n,int start=2){
//default value will alway sfrom right side and then move towards left side 

//void print(int arr[],int n,int start){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;

    }
}
int main(){
    int arr[5]={1,2,5,4,8};
    int size=5;
    print(arr,size,0);
    return 0;
}