// Armstrong number.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int originalN=n;

    while(n>0){
        int lastDigit=n%10;
        sum=sum+pow(lastDigit,3);
        n = n/10;
    }
    if(sum==originalN){
        cout<<originalN<<" It is armstrong number";
    }
    else{
        cout<<originalN<<" It is not a armstrong number.";
    }

    return 0;
}