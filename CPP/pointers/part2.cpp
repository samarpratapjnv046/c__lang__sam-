#include<iostream>
using namespace std;
int main(){
    /*int arr[10]={1,3,6,5,4};
    cout<<"address of first memory block is" << arr<<endl;
    cout<<"address of first memory block is"<< &arr[0]<<endl;
    cout<<"value is:"<< *arr<<endl;
    cout<<"4th"<<*arr<<endl;
    cout<<"5th"<<*arr+1<<endl;
    cout<<"6th"<<*(arr+1)<<endl;
    cout<<"7th"<<*(arr)+1<<endl;
    cout<<"8th"<<arr[2]<<endl;
    cout<<"9th"<<*(arr+2)<<endl;

    int i=3;
    // important
    cout<<i[arr]<<endl;
    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    int *p=&temp[0];
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&p)<<endl;
    return 0;
    */
/*int a[20]={1,2,3,6,5,4,7,8,9};
cout<<&a[0]<<endl;
cout<<&a<<endl;
cout<<a<<endl;
 int *p=&a[0];
 cout<<*p<<endl;
cout<<p<<endl;
cout<<&p<<endl;
return 0;
*/
// ERROR
 /*int arr[10];
 arr=arr+1;*/
/*int arr[10];
 int *ptr=&arr[0];
 cout<<ptr<<endl;
 ptr=ptr+1;
 cout<<ptr<<endl;
 */

// CHARACTER ARRAY
/*int arr[5]={1,2,3,6,5};
char ch[6]="abcde";
cout<<arr<<endl;
cout<<ch<<endl;
 char *c=&ch[0];
 cout<<c<<endl;*/
  char temp='a';
  char *p = &temp;
  cout<<p<<endl;

}