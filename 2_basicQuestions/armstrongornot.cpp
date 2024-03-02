#include<iostream>

using namespace std;
int main(){
    int n, sum=0;
    cin>>n;
    int originalN=n;
    while(n>0){
        int lastDigit = n%10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n=n/10;
    }
    if(sum==originalN){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not a Armstrong Number";
    }
return 0;
}