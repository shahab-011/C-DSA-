#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int row=1;
    while(row<=n){
        int column=1;
        while(column<=n){
        cout<<count<<" ";
        count=count+1;
        column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
    

    return 0;
}