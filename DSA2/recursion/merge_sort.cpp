#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
     int mid=(s+e)/2;
     int len1=mid-s+1;
     int len2=e-mid;
     int *first=new int[len1];
     int *second=new int[len2];
    //  copy values 
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    int l=mid+1;
        for(int j=0;j<len2;j++){
        second[j]=arr[l++];
    }
    // merge two sorted array
    int index1=0;
    int index2=0;
    int mainarrayindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while(index1<len1){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
    }
    while(index2<len2){
            arr[mainarrayindex++]=second[index2++];
    }
    delete [] first;
    delete [] second;
}

void mergesort(int *arr,int s,int e){
    // base case
    if(s>=e)
    return;
    int mid=(s+e)/2;
    // left part sort karna hai
    mergesort(arr,s,mid);
    // right part sort karna hai
    mergesort(arr,mid+1,e);
    // merge karna hai
    merge(arr,s,e);
}
int main(){
    int arr[5]={1,5,4,2,6};
    int n=5;
    // cout<<"hi";
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
return 0;
}