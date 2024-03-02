#include<bits/stdc++.h>
using namespace std;

int sum(int a){
    int sum=0;
    for(int i=1; i<=a; i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    
    cout<<sum(n)<<endl;
    return 0;
}