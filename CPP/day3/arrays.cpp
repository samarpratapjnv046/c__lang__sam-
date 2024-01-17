// array: it is a collection of similar type of data
/*#include<iostream>
using namespace std;
int main(){
    int arr[30],n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the values of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/

// printing of array using function
/*#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
}
}
int main(){
    int arr[]={1,2,3,5,3,4};
 int size=sizeof(arr)/sizeof(int);
 printarray(arr,size);
}*/

// scopes in array
/*#include<iostream>
using namespace std;
// whwn yiu pass array as an arguement in func then it does not take copy of array ,it take base address  and 
// updatation is seen both outside and in side of the function

void update(int arr[],int size){
    cout<<"inside the function"<<endl;
    arr[1]=5;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,6,5,4};
    int size=sizeof(arr)/sizeof(int);
    update(arr,size);
    cout<<"ouside the function "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}*/

//  find max and min of a given array
#include<iostream>
using namespace std;
int getmax(int num[],int n){
   int max=num[0];
   for(int i=1;i<n;i++){
if(num[i]>max){
    max=num[i];
}
   }
   cout<<"maximum number of this array is "<<max<<endl;
}
int main(){
    int arr[]={10,2,5,3,6,4,8,9,6,3,45};
    int size=sizeof(arr)/sizeof(int);
    getmax(arr,size);
}




