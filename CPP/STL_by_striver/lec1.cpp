#include<bits/stdc++.h>
// #include<math.h>
using namespace std;
    namespace raj{
        int val=20;
        int getval(){
            return val*10;
        }
    }
struct node {
     string str;
     int num;
     double doub;
     char x;
};
int main(){
    /*double val=10.0;
    cout<<val<<endl;
    cout<<raj::getval()<<endl;

    // create a data type where you store   "struct"
    // this is the wrong way

    node raj;
    raj.str="ram";
    raj.num=56;
    raj.doub=45.0;
*/
    // right way '
    // node*raj = new node("ram",45,12.0,"");
// node raj =node("ram",45,12.0,"");

//  definig array 
// array<int ,3>arr1;  //it have some garbage value 
/*array<int ,5>arr={1,5,3}; //{1,5,3,0,0} 
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
array<int ,3>arr1;
arr1.fill(0);
for(int i=0;i<3;i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;
// arr.at(index);
for(int i=0;i<5;i++){
    cout<<arr.at(i)<<endl;
}
 */

// iterrator
// begin(),end(),rbegin(),rend()
/*array<int,5> arr = {1,2,3,6,5};
for(auto it= arr.begin(); it!=arr.end();it++){
    cout<<*it<<" ";
}
for(auto it= arr.rbegin(); it>arr.rend();it++){
    cout<<*it<<" ";
}*/

// for each loop
/*array<int,5> arr = {1,2,3,6,5};
for(auto it : arr){
    cout<<it<<endl;
}
string s="agcswxgskc";
for(auto c:s){
    cout<<c<<endl; 
}
*/

/*array<int,5> arr = {1,2,3,6,5};
// for size of array
cout<<arr.size()<<endl;
// for first element 
cout<<arr.front()<<endl;
// for last element of array 
cout<<arr.back()<<endl;
*/

// VECTOR
/* 
globally int arr[10^7]   bool arr[10^8]
int int main(){
    int arr[10^6]
    int boll[10^7]
}
*/
// declaration of vector 
vector<int>arr;
cout<<arr.size()<<endl;
arr.push_back(5); 
arr.push_back(8); 
arr.push_back(6); 
cout<<arr.size()<<endl;
arr.pop_back();
cout<<arr.size()<<endl;
// segnentation error if yiu push back 10^7 times
 arr.clear();//it will erase all data of array 
  
  vector<int>vec(4,0);//{ 0,0,0,0}
//after this u can apply the push back to increase the size os array 
vector<int>vec1(4,0);
vector<int>vec2(4,10);
// copy entire vec2 to entire 3
vector<int>vec3(vec2.begin(),vec2.end());//-> [)
vector<int>vec3(vec2);

vector<int>raj;
raj.push_back(2);//raj.emplace_back(2)  emplace_back() takes less time than push_back()
raj.push_back(6);
raj.push_back(9);
raj.push_back(4);
raj.push_back(1);//{2,6,9,4,1}
vector<int>raj1(raj.begin(),raj.begin()+2);

// lower bound ,uopper bound 
//swap (v1,v2)

// define 2D vector 
vector<vector<int>>vec;
 vector<int>raj1;
 raj1.push_back(3);
 raj1.emplace_back(4);

 vector<int>raj2;
 raj2.push_back(8);
 raj2.emplace_back(9);

vec.emplace_back(raj1);
vec.emplace_back(raj2);

//it is a vector it self
/*for(auto vect:vec){
    for(auto it: vect){
        cout<<it<<" ";
    }
    cout<<endl;
}
*/
/*for(int i=0;i<vec.size();i++){
    for(int j=0; j<vec[i].size(); j++){
        cout<<vec[i][j];
    }
    cout<<endl;
}*/
  /*for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }    
        cout << endl;
    }*/

/*vector<vector<int>>vec(10,vector<int>(20,0));
vec.push_back(vector<int>(20,0));
 vector<int>arr[4];
   
//HOW TO DEFINE 3D VECTOR 
//10*20*30
vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20,vector<int>(30,0)));
*/




return 0;
}
