#include<iostream>
using namespace std;
class hero{
    // properties
    // char name[100];
    private:
     int health;
    // char level;
    public:
    char *name;
    // int health;
    char level;
      hero( int health ){
        cout<<"constructor called"<<endl;
        this->health=health;
       
    }

    hero( int health , char level){
        cout<<"constructor called"<<endl;
        this->health=health;
        this->level=level;
    }
    hero(){
        cout<<"called simple constructor"<<endl;
        name=new char[100];
    }
    //copy constructor
    hero (hero& temp){
        cout<<"copy constructor called"<<endl;
        this-> health=temp.health;
        this-> level=temp.level;


    }

int getHealth(){
    return health;
}
char getlevel(){
    return level;
}
void sethealth(int h){
    health=h;
}
void setlevel(char g){
    level=g;
}
void print(){
    cout<<"health "<<this-> health<<endl;
    cout<<"level is"<<this-> level<<endl;
}
};
int main()
{
//     // static allocation
//     hero a;
//     // dynamic allocation 
//     hero *b= new hero;
// // creation of object
// hero h1;
// cout<<"size:"<<sizeof(h1)<<endl; 
// // h1.health=70;
// h1.level='f';
// // cout<<"health  is"<<h1.health<<endl;
// cout<<"level  is"<<h1.level<<endl;
// h1.sethealth(5); 
// cout<<"h1 health is"<<h1.getHealth()<<endl;
// cout<<"level is"<<(*b).level<<endl;
// cout<<" health is "<<(*b).getHealth()<<endl;
// cout<<" health is "<<b->getHealth()<<endl;

// cout<<"before object creation "<<endl;
// hero ramesh(10);
// cout<<"address of ramesh"<<&ramesh<<endl;
// ramesh.getHealth();

// copy constructor called
hero ramesh(70,'c');
hero dinesh(ramesh);
dinesh.print();
// ramesh.print();



// cout<<"after object creation"<<endl;

// padding and greedy alignment

    return 0;

} 