#include<iostream>
using namespace std;
// function to check array is sorted or not using recursion 
/*bool isSorted(int arr[],int size){// we pass array pointer we can write int *arr  as well
    //base case 
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
       bool remainingpart= isSorted(arr++,size-1);
       return remainingpart;
    }
}
*/
// to get the sum of array using recursion 
/*int getsum(int arr[],int size){
    if(size==0){
        return 0;
    }
        if(size==1){
        return arr[0];
    }
    else{
        int remainingpart=getsum(arr++,size-1);
        int sum=arr[0]+remainingpart;
        return sum;
    }
}*/
/*void print(int arr[],int n){
    cout<<"size of array is:"<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// function for linear search 
bool linearsearch(int arr[],int size,int key){
    print(arr,size);
    // base case 
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        int remainingpart=linearsearch(arr+1,size-1,key);//here we can not write arr++
        return remainingpart;
        }
    }
*/

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// binary search using recursion
bool binarysearch(int *arr,int s,int e,int key){
    cout<<endl;
    print(arr,s,e);
    // base case 
    //element not found
    if(s>e)
    return -1;
    // element found
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarysearch(arr,mid+1,e,key);
    }
    else{
        return binarysearch(arr,s,mid-1,key);
    }
}
int main(){
 int arr[]={8,5,6,49,73,2};
 int size=sizeof(arr)/sizeof(int);
 int key=2;
 /*bool ans=isSorted(arr,size);
//  cout<<ans<<endl;
if(ans){
    cout<<"array is sorted"<<endl;
}
else{
    cout<<"array is not sorted "<<endl;
}
*/
/*
int ans1=getsum(arr,size);
cout<<"sum is:"<<ans1<<endl;
*/
/*int ans2=linearsearch(arr,size,key);
if(ans2){
    cout<<"present";
}
else{
    cout<<"not present";
}
*/

cout<<"present or not:"<<binarysearch(arr,0,size,key);
return 0;
}