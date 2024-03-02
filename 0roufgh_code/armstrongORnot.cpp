#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int originalN = n;
    int sum=0;

    while(n>0){
        int lastDigit = n%10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n=n/10;
    }
    if(originalN==sum){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not a Armstrong Number";
    }


return 0;
}