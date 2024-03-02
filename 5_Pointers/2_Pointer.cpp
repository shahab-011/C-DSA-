#include<iostream>
using namespace std;
int main(){
    int i=5;
    int* ptr = 0;
    ptr = &i;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int num=10;
    int a=num;
    a++;
    cout<<num<<endl;

    int *p = &num;
    int b = *p;
    b++;
    cout<<num<<endl;

    int *p2 = &num;
    cout<<"Before : "<<num<<endl;
    (*p2)++;
    cout<<"After : "<<num<<endl;

    // copying a pointer
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    


return 0;
}