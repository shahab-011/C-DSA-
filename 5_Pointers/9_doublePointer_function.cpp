#include<iostream>
using namespace std;

// void update2(int **p){
//     p=p+1;
//     cout<<*p<<endl;
// }

void update(int **p2){
    p2 = p2 + 1;
    cout<<p2<<endl;
}
void update2(int **p2){
    *p2 = *p2 + 1;
}
void update3(int **p2){
    **p2 = **p2 + 1;
}


int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<"Before : "<<i<<endl;
    cout<<"Before : "<<p<<endl;
    cout<<"Before : "<<p2<<endl;
    update(p2);
    cout<<"After : "<<i<<endl;
    cout<<"After : "<<p<<endl;
    cout<<"After : "<<p2<<endl;
    cout<<endl;

    cout<<"Before2 : "<<i<<endl;
    cout<<"Before2 : "<<p<<endl;
    cout<<"Before2 : "<<p2<<endl;
    update2(p2);
    cout<<"After2 : "<<i<<endl;
    cout<<"After2 : "<<p<<endl;
    cout<<"After2 : "<<p2<<endl;
    cout<<endl;

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