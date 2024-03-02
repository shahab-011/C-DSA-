#include<iostream>
using namespace std;
class Hero{
    private:
    //properties
    int health;
    public:
    char level;
    
    //getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    
    //setter
    void setHealth(int h){
        health = h;
    }
    void setLevel(int ch){
        level = ch;
    }

};
int main(){
    //Static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('C');
    cout<<"Level is :"<<a.level<<endl;
    cout<<"Health is :"<<a.getHealth()<<endl;

    cout<<endl;

    //Dynamic allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Health is: "<<(*b).getHealth()<<endl;

    cout<<endl;

    cout<<"Level is: "<<b->level<<endl;
    cout<<"Health is: "<<b->getHealth()<<endl;


return 0;
}