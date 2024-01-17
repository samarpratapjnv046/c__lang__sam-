#include<iostream>
#include<string>
using namespace std;
int largestrow(int arr[3][4],int row,int col){
    int maxi= 0;
    int indrow=-1;
    
    for(int row=0;row<3;row++){
        int sumr=0;
        for(int col=0;col<4;col++){
            sumr=sumr+arr[row][col];
        }
       if(sumr>maxi){
        maxi=sumr;
        indrow=row;
       }
    }
    cout<<maxi<<endl;
    return indrow;
}
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<largestrow(arr,3,4); 
}