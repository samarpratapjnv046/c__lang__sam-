#include<iostream>
using namespace std;
// row wise
/*void printsum(int arr[3][4]){
    int sumr=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sumr=sumr+arr[i][j];
        }
        cout<<sumr<<endl;
        sumr=0;
    }
}*/
// colum wise
void printsum(int arr[3][4]){
    int sumr=0;
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            sumr=sumr+arr[i][j];
        }
        cout<<sumr<<endl;
        sumr=0;
    }
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
    printsum(arr); 
}