#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=n;
    int row=n;
    while(row>=1){
        int column=n;
        while(column>=1){
            cout<<count<<" ";
            count=n-1;
            column=column-1;

        }
        cout<<endl;
        row=row-1;
    }
    
    return 0;
}