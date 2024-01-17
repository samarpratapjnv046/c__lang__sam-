#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"bhau bhau"<<endl;
    }
   
};
class dog : public animal{

};
class germansafered :public dog{

};
    int main(){
       dog d;
       d.speak(); 
       germansafered g;
       g.speak();
   return 0;
}