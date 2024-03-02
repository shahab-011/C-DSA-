#include<iostream>
using namespace std;
int main(){
    int i=3;
    int *t = &i;
    cout<<(*t)++<<endl;
    cout<<*t<<endl;
    *t = *t + 1;
    cout<<*t<<endl;

    cout<<"Before t: "<<t<<endl;
    t=t+1;
    cout<<"Before t: "<<t;

    return 0;
}