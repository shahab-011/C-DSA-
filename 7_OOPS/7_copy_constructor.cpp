#include<iostream>
using namespace std;

class Hero{
    public:
        int health;
        char level;
Hero(){
    cout<<"Constructor called";
}


    Hero(int health){
        cout<<" this "<<this<<endl;
        this -> health = health;
    }
    
    Hero(int health, char level){
        cout<<" this "<<this<<endl;
        this -> health = health;
        this -> level = level;
    }

    void pirnt(){
        cout<<"level:"<<this->level<<endl;
        cout<<"Health:"<<this->health<<endl;
    }
};

int main(){
    Hero suresh(70, 'C');
    suresh.print();


    Hero ritesh(suresh);
    ritesh.print();

    //ritesh.level=suresh.level;
    //ritesh.health=suresh.health

      

return 0;
}