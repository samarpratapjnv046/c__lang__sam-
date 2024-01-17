#include<iostream>
using namespace std;

bool search(int arr[3][4],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    /*int arr[3][2]={1,2,3,6,5,4};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }*/
    /*for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }*/

    int arr[3][4]={1,2,3,6,5,4,9,8,7,7,5,6};
        cout<<"enter the value of r and target"<<endl;
        int  target;
    cin>>target;
    if(search(arr,target)){
        cout<<" present"<<endl;
    }
    else{
    cout<<"absent"<<endl;
    }
    return 0;
}