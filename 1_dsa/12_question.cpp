// Print only prime numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    int i = 2;
    while(i<n){
        // divide ho gya to not prime
        if(n%i==0){
            cout<<"Not prime for "<<i<<endl;
        }
        else{
            cout<<"Prime for "<<i<<endl;
        }
        i = i + 1;
    }

    return 0;
}