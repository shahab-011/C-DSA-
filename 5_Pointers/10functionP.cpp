#include<iostream>
using namespace std;

void update3(int **p2){
    **p2=**p2+1;
}

int main(){
    int i=3;
    int *p=&i;
    int **p2=&p;
    
    cout<<"Before3 : "<<i<<endl;
    cout<<"Before3 : "<<p<<endl;
    cout<<"Before3 : "<<p2<<endl;
    update3(p2);
    cout<<"After3 : "<<i<<endl;
    cout<<"After3 : "<<p<<endl;
    cout<<"After3 : "<<p2<<endl;
    cout<<endl;
    
return 0;
}