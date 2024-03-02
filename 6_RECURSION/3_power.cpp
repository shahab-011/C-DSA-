#include<iostream>
using namespace std;

int pow(int n){
    if(n==0)
       return 1;

    int sp = pow(n-1);
    int bp = 2 * pow(n-1);
    return bp;
}

int main(){
    int n;
    cin>>n;
    int ans = pow(n);
    cout<<ans<<endl;
return 0;
}