#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a:"<<endl;
    cin>>a;
    if(a>0){
        cout<<"a is +ve"<<endl;
    }
    else{
        if(a<0){
        cout<<"a is negetive"<<endl;
        }
        else{
            cout<<"a is 0";
        }
    }    

    return 0;
}