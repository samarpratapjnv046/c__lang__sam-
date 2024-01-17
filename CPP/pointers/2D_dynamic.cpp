#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int **arr=new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    //creation done 
    //takin input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // taking out put
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // we can take row and column as input by user 

    // releasing the array 
    /*for(int i=0;i<row;i++){
        delete []arr[i];
    }
    */

}
