// first and last occurence of an element in array
#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
int s=0,e=(n-1);
int mid=s+(s+e)/2;
int ans=-1;
while(s<=e){
    
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
     else if(key>arr[mid]){ 
        s=mid+1;
    }
    else if(key<arr[mid]){
        e=mid-1;
    }
int mid=s+(s+e)/2;
}
return ans;
}
int main(){
    int arr[10]={1,2,5,5,5,5,5,6,7,8};
    cout<<"first occurence of key is :"<<firstOcc(arr,10,5)<<endl;
    return 0;
}
