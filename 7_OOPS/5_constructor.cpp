#include<iostream>
using namespace std;

class Hero{
    public:

    Hero(){
        cout<<"Constructor called. "<<endl;
    }

};

int main(){
    cout<<"Hi"<<endl;
    //object created statically
    Hero ramesh; 
    cout<<"Hello"<<endl;

    //object createdd dynamically
    Hero *suresh = new Hero;


return 0;
}