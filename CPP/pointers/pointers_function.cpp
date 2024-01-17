#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
 void update(int *p){
    // p=p+1;
    // cout<<"inside"<<p<<endl;
    *p=*p+1;

 }
//  int getsum(int arr[] ,int n){
  int getsum(int *arr ,int n){
  int sum=0;
  cout<<" size is:"<<sizeof(arr)<<endl;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
    // sum=sum+i[arr];
  }
  return sum;
 }
int main(){
 /*int value =5;
 int *p=&value;
 print(p);
 cout<<"before"<<p<<endl;
update(p);
cout<<"after"<<p<<endl;
 return 0;

  int r=10;
  int *u=&r;
  cout<<u<<endl;
  cout<<(*u)*2<<endl;
  */

  int arr[6]={1,2,3,6,5};
  // cout<<"sum is :"<<getsum(arr,5)<<endl;
  cout<<"sum is :"<<getsum(arr+3,3)<<endl;
  // cout<<" size is:"<<sizeof(arr)<<endl;
  //  we can send the part of array 



}