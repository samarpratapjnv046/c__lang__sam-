#include<iostream>
#include<vector>
using namespace std;
vector<int> waveprint(vector<vector<int>>arr, int nrows, int mcols ){
    vector<int> ans;
    for(int col=0; col<mcols;col++){
        if(col&1){
            // odd index-top to bottom
            for(int row=nrows-1;row>=0;row--){
                // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row,nrows;row++){
                //cout<<arr[row][col]<<" ";
                  ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
