#include<iostream>
// #include<hero.cpp>
using namespace std;
   class hero{
    // char nickname[10];
     int health ;
    public:
   
    char name[10];
    int level;
    void print(){
        cout<<level<<endl;
    }
    // void setnickname(char h[10] ){
    //     nickname= h[10];
    // }
    // char getname(){
    //     return nickname;
    // }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
  health=h;
    }
    hero( int health ){
        cout<<"called constructor"<<endl;
        healthn= health;
    }
   } ;
int main(){
    // creation of object 
    hero h1;
    cout<<"size of class is:"<<sizeof(h1)<<endl;
    //  in case of empty class  size is 1
    // h1.health=54;
    // h1.level=2;

cout<<"health is :"<< h1.gethealth()<<endl;
// cout<<"level is:" << h1.level<<endl;
// private only acces in class not in main function 


return 0;
}