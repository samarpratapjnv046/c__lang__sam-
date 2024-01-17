#include<iostream>
/*using namespace std;
int main(){
    // recall linear search
    int key=7;
    int arr[]={1,2,3,6,5,4,9,8,7};
    for(int i=0;i<9;i++){
        if(arr[i]==key){
    cout<<"present";
    }
    }
}*/



// binary search
int  indexsearch(int arr[],int size,int key)
{
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        start=start+1;
    }
    else
{
  end=mid-1;  
}
mid=start+(end-start)/2;
}
return -1;
}
#include<iostream>
using namespace std;
int main(){
    int even[8]={2,4,6,8,10,12,14,16};
    int odd[8]={1,3,5,7,9,11,13,15};
     int index_even=indexsearch(even,8,10);
     int index_odd=indexsearch(odd,8,11);
    cout<<"index of 10 is:"<<index_even<<endl;
    cout<<"index of 11 is:"<<index_odd<<endl;
}
    