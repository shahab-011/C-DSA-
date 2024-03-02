#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    for(int i=2; i<n; i++){
        int flag=0;
        for(int k=2; k<=i/2; k++){
            if(i%k==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<"  ";
        }

    }


return 0;
}