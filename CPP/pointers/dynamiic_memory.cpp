#include<iostream>
using namespace std;
void update (int n){
    n++;
}
using namespace std;
void update1 (int &n){
    n++;
}
// bad practice and same with pointer
/*int& func(int a){
    int num =a;
    int& ans=num;
    return ans;
}*/
int getSum(int arr[],int n){
        int sum=0;
    for(int i=0;i<n;i++){
    sum+=arr[i];
    }
    return sum;
}
int main(){
    /*int i=4;
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<j<<endl;
*/

/*int& func(int a){
    int num=a;
    int& ans=num;
    return ans;
}*/
/*int n=5;
cout<<"before "<<n<<endl;
update(n);
cout<<"after "<<n<<endl;
int m=6;
cout<<"before "<<m<<endl;
update1(m);
cout<<"after "<<m<<endl;
*/

/*
char ch='q';
cout<<sizeof(ch)<<endl;
char *c=&ch;
cout<<sizeof(c)<<endl;
*/
int n;
cin>>n;
// variable size allocation
int * arr=new int[n];
// taking input in an array 
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=getSum(arr,n);
cout<<"answer is :"<<ans<<endl;

return 0;
}

