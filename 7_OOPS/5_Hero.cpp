#include<iostream>
using namespace std;

class Hero{
    int health;
    Hero(){
    cout<<"Constructor Called"<<endl;
    }
    Hero(int health){
        health = health; 
    } 

};
int main(){
 //   Hero ramesh(10);
   // cout<<"Address of ramesh"<<&ramesh<<endl;

return 0;
}