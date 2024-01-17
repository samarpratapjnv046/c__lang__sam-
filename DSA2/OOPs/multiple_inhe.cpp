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
class gully {
    public:
    void galide(){
        cout<<"bhag bsdk"<<endl;
    }
};
class dog :public gully , public animal{

};
int main(){

dog d;
d.speak();
d.galide();


    return 0;
}