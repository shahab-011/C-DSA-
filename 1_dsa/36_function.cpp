#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=a; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }

p
}