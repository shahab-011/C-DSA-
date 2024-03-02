#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<"Address of num is : "<<&num<<endl;
    int *ptr = &num;
    double d=4.3;
    double *p2=&d;
    cout<<"Address of num is : "<<ptr<<endl;
    cout<<"Value is : "<<*ptr<<endl;
    cout<<"Size of interger : "<<sizeof(num)<<endl;
    cout<<"Size of pointer : "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer : "<<sizeof(p2)<<endl;
    



return 0;
}