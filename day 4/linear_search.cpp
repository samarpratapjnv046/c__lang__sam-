#include<iostream>
using namespace std;
int search(int arr[], int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
   return 0;
}
int main(){
    int arr[]={1,5,3,6,9,7,4,56},key;
    int size=sizeof(arr)/sizeof(int);
    cout<<"enter the key "<<endl;
    cin>>key;
    bool found=search(arr,size,key);
    if(found){
        cout<<key<<" is present in given array";
    }
    else
    cout<<"not present";
}


