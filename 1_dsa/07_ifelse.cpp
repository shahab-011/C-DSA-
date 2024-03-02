#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character : "<<endl;
    cin>>ch;

    if((ch>=65) && (ch<=90)){
        cout<<ch<<" is a uppercase letter."<<endl;
    }
    else if((ch>=97) && (ch<=122)){
        cout<<ch<<" is a lowercase letter."<<endl;
    }
    else {
        cout<<"entered value is numeric."<<endl;
    }


return 0;
}