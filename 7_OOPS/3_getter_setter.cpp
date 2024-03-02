#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
   
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

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
    Hero ramesh;

    cout<<"Ramesh Health is : "<<ramesh.getHealth()<<endl;
    ramesh.setHealth(70);
    cout<<"Ramesh Health is : "<<ramesh.getHealth()<<endl;
    ramesh.level='A';

  //  cout<<"Health is "<<ramesh.health<<endl;
    cout<<"Level is "<<ramesh.level<<endl;



return 0;
}