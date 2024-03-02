/*
A B C D
E F G H 
I J K L
M N O P
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char count='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<count<<" ";
            count = count + 1;
            
        }
        cout<<endl;
    }

    return 0;
}