#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }

    int sp = fact(n-1);
    return n * sp;
}

int main(){
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans;

return 0;
}