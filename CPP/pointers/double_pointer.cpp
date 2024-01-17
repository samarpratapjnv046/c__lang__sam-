#include<iostream>
using namespace std;
void update(int **p2){
    // p2=p2+1;
    // kuch change hoga? - NO
    *p2=*p2+1;
    // kuch change hua ? yes
    // **p2=**p2+1;
    // kuch change hua ? yes


}
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
  /*  cout<<endl<<"sab sahi chAL RHA HAI"<<endl;
    cout<<"printing p"<<&p<<endl;
    cout<<"printing p"<<p<<endl;
    cout<<"printing p"<<*p2<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;
*/
cout<<endl<<endl;
cout<<"before"<<i<<endl;
cout<<"before"<<p<<endl;
cout<<"before"<<p2<<endl;
update(p2);
cout<<"before"<<i<<endl;
cout<<"before"<<p<<endl;
cout<<"before"<<p2<<endl;
cout<<endl<<endl;


    return 0;    
} 