#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isbool=1;

    for(int i=2; i<n; i++){
        if(n%i==0){
            isbool = 0;
            break;
        }
    }
    if(isbool==0){
        cout<<"Not a prime number";
    }
    else{
        cout<<"Its a prime number";
    }
return 0;
}