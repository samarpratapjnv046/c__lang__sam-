#include<iostream>
// #include"Hero.cpp" // in case hero class is defined in other file 
using namespace std;
class hero{
    // properties
    /*char name[100];
    int health;
    char level;
    */
   private:
    int health;
   public:
  
   char level;
void print(){
    cout<<level<<endl;
}
int gethealth(){
    return health;
}
void sethealth(int h){
    health=h;
}
/*char getlevel(){
    return level;
}*/

/*void setlevel(char g){
    level=g;
}*/
/*
// creation of constructor
hero(){
    cout<<"call of constructor";
}
*/

// parameterised constructor we can take two parameter also
hero(int health){
    cout<<"this->"<<this<<endl;
    this->health=health;
}


};
int main(){
    // creattion of object
    // hero h1;
    // use of setter 
    /*h1.sethealth(60);
    cout<<" h1 health is :"<<h1.gethealth()<<endl;
*/
   // cout<<"size :"<<sizeof(h1)<<endl;
/*
    cout<<"health is :"<<h1.health<<endl; // show error because access modifiers is private by default
    cout<<"level is:"<<h1.level<<endl;
*/
/*h1.level='l';
h1.health=60;

cout<<"health is :"<<h1.health<<endl; // show error because access modifiers is private by default
cout<<"level is:"<<h1.level<<endl;
*/
/*hero ramesh;
cout<<"size of ramesh is "<<sizeof(ramesh)<<endl;
// padding and greedy alignment home work
*/
/*
// static allocation 
hero raj;
cout<<"health is :"<<raj.gethealth()<<endl; 
cout<<"level is:"<<raj.level<<endl;

// dynamic  allocation 
hero *a= new hero;
cout<<"health is :"<<(*a).gethealth()<<endl; 
cout<<"level is:"<<(*a).level<<endl;
// another way 
cout<<"health is :"<<a->gethealth()<<endl; 
cout<<"level is:"<<a->level<<endl;
*/
/*
// valid in both dynamic as well as statics allocation 
cout<<"before call of constructor."<<endl;
hero ramesh;
*/

/*
// call for parameterised constructorsame for dynamic 
hero ramesh(10);
cout<<"address of ramesh is:"<<&ramesh<<endl;
ramesh.gethealth();
// dynamically 
hero *g=new hero(10);
*/



return 0;
} 