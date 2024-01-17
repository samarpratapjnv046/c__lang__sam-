#include<iostream>
using namespace std;
void saydigit(int n, string arr[]){
    //base case 
    if (n==0)
    return ;
    //processing 
    int digit =n%10;
    n=n/10;
    saydigit(n, arr);
    cout<<arr[digit]<<" ";

}

void reachhome(int src,int dest){
    // base case
    if(src==dest){
        cout<<"pahunch gya"<<endl;
  return;
    }
    // processing 

  src++;
//   recursive call
  reachhome(src,dest);

}
int main(){
    int dest=10;
    int src=1;
    reachhome(src,dest);

     string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
     int n;
     cin>>n;
// cout<<endl<<endl<<endl;
saydigit(n,arr);
// cout<<endl<<endl<<endl;
}