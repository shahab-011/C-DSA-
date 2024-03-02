#include<iostream>
using namespace std;

class Hero{
    public:
    //properties
    int health=70;

    char level;

    void print(){
        cout<<level<<endl;
    }
};

int main(){
    Hero ramesh;

    ramesh.level='A';

    cout<<"Health is "<<ramesh.health<<endl;
    cout<<"Level is "<<ramesh.level<<endl;



return 0;
}