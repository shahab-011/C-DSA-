//Sum of a even numbers.
#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter the value of a : "<<endl;
    cin>>n;
    sum = 0;
    int i = 2;
    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}