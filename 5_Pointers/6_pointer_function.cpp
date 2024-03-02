#include<iostream>
using namespace std;

void update2(int *p){
    *p=*p+1;
    cout<<*p<<endl;
}

void update(int *p){
    p=p+1;
    cout<<p<<endl;
}

void print(int *p){
    cout<<*p<<endl;
}

int main(){
    int value = 5;
    int *p=&value;
    print(p);
    cout<<"Before:"<<p<<endl;
    update(p);
    cout<<"AFter:"<<p<<endl;
    cout<<endl;

    cout<<"Before2:"<<*p<<endl;
    update2(p);
    cout<<"After2:"<<*p<<endl;



return 0;
}