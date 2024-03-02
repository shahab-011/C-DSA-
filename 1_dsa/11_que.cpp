// Converet Fahrenheit into celsius.

#include<iostream>
using namespace std;
int main(){
    int farh, cels;
    cout<<"Enter fahrenheit : "<<endl;
    cin>>farh;
    cels = (farh - 32) * 5/9;
    cout<<cels<<" degree celsius"<<endl;
    
    return 0;
}