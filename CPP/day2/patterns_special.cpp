/*#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(j==i+1){
                cout<<"    ";
            }
            else
            cout<<"*"<<"  ";
        }
        cout<<endl;
    }
}*/


#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(5==i+1+j){
                cout<<"*"<<"  ";
               
            }
            else
             cout<<"    ";
        }
        cout<<endl;
    }
}