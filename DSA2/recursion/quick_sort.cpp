#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot =arr[s];
    int count=0;
    for(int i=s+1;i<e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    // place pivot at right place 
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);
    // left and right wala part sambhal lete hai 
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
        j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;

}
void quicksort(int *arr,int s,int e) {
    //  base case
    if(s>=e){
        return;
    }
    // partition karte hai 
    int p=partition(arr,s,e);
    // left part sort karte hai
    quicksort(arr,s,p-1);
    // right part ko sort karat ehai 
    quicksort(arr,p+1,e);

}   
int main(){
    int arr[5]={1,5,4,2,6};
    int n=5;
    // cout<<"hi";
quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
return 0;
}

// home work check it is in-place technique and check it is stable algorithm or not 

