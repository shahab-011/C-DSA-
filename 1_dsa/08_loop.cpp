#include<iostream>
using namespace std;
int main(){
    int n, sum;
    cout<<"Enter :"<<endl;
    cin>>n;
    sum = 0;
    int i = 1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"Sum is "<<sum;
    return 0;
}