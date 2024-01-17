#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>&arr){
    // xor all array element
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    // xor 1 to n-1 
    for(int i=0;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(8);
   int n= findDuplicate(arr);
   cout<<n;
}