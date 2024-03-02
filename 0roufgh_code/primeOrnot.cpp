#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime = 1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            bool isPrime = 0;
            break;
        }
    }
    if (isPrime == 0){
        cout<<"Given number is not prime";
    }
    else{
        cout<<"Given number is prime";
    }

return 0;
}