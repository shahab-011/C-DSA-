#include<iostream>
using namespace std;

class Hero{
    public:
        int health;
        char level;

    Hero(int health){
        cout<<" this "<<this<<endl;
        this -> health = health;
    }
    
    Hero(int health, char level){
        cout<<" this "<<this<<endl;
        this -> health = health;
        this -> level = level;
    }
    void print(){
        cout<<level<<endl;
    }



};

int main(){
    Hero ramesh(10);
    ramesh.print();
    cout<<"Address of Ramesh : "<<&ramesh<<endl; 
    Hero temp(22, 'B');
   // temp.print();

return 0;
}