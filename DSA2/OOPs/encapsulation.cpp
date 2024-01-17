#include<iostream>
using namespace std;
// class student {
// private:
//     string name;
//     int age ;
//     int height;
//  public:
//     int getage(){
//         return this->age;
//     }
// };
class Human {
    public:
    int height;
    int weight;
    // private:
    int age;
    public:
    int getage(){
        return this->age;
    }
    int setweight(int w){
        this->weight=w;
    }
   
};
// class male: private Human{
    class male: public Human{
    public:
    string color;
    void attack(){
        cout<<"man is attacking ."<<endl;
    }
     int getHeight(){
    return height;
}
void setheight(int h){
    height=h;
}

};
int main(){
    // student first;
    // cout<<"sab sahi chal rha hai"<<endl;
   /*
    male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
    object1.setweight(54);
    cout<< object1.weight<<endl;
    object1.attack();
   */
male male1;
cout<<male1.height<<endl;
 



return 0;
}