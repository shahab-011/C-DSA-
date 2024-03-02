#include<iostream>
using namespace std;
//   wrong

int poww(int n){
    int m;
    cout<<"enter power:"<<endl;
    cin>>m;
    //base case
    if(n==0){
        return 1;
    }
    

    int sp = poww(n-1);
    return m * sp;
}

int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;


    int ans = poww(n);
    cout<<ans;

return 0;
}