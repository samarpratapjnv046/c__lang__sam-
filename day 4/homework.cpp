/*#include<iostream>
using namespace std;
int main(){
    // sum of array elements
    int arr[30],n;
    int count=0;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    cout<<"enter the value of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        count=count+arr[i];
    }
    cout<<endl;
    cout<<"the sum of array is "<<count<<endl;
}*/

// use of continue function
/*#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        if(i==3){
            continue;
        }
        cout<<i;
        }
}*/

// swap alteranate elements 
/*#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,6,5,4,7,8,9,10};
int n=sizeof(arr)/sizeof(int);
int start=0;
int end=1;
 for(int i=0;i<n/2;i++){
    swap(arr[start],arr[end]);
    start=start+2;
    end=end+2;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}*/

// find unique element
#include<iostream>
using namespace std;
int main(){
    int arr[];
     bool uniqueOccurrences(vector<int>& arr) {
        int ans=0;
        int arr1[arr.size()];
        for(int i=0;i<arr.size();i++){
             int count=1;
            for(int j=1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count=count+1;
            }
                 else
                 {
                arr1[i]=count;
                 }
            } 
}
        for(int k=0;k<arr.size();k++){
            ans=ans^arr1[k];
        }
        return ans;
    }
}
}
