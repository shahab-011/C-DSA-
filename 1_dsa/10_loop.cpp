#include<iostream>
using namespace std;
int main(){
  
    int n , prod;
    cout <<"Enter n : "<<endl;
    cin>>n;
    prod = 1;
    int i=1;
    while(i<=n){
        prod = prod * i;
        i++;
    }
    cout<<"Product is "<<prod<<endl;


    return 0;
}