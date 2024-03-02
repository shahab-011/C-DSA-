#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    
    char getHealth(){
        return health;
    }

    char getLevel(){
    return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(int L){
        level = L;
    }

};

int main(){
    Hero a;

    a.setHealth(80);
    cout<<"Health is : "<<a.getHealth()<<endl;
    cout<<"Level is : "<<a.level<<endl;

    Hero *b = new Hero; 

    b->setLevel('A');
    b->setHealth(90);
    cout<<"Health is : "<<(*b).getHealth()<<endl;
    cout<<"Level is : "<<(*b).level<<endl;
    
    cout<<"Health is : "<< b -> getHealth()<<endl;
    cout<<"Level is : "<< b -> level<<endl;




return 0;
}