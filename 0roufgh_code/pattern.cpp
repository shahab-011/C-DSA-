#include<iostream>
using namespace std;

int main(){
    int count = 1;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            if(i==1 || i==4 || j==1 || j==4){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
         
        }
        cout<<endl;
    }

return 0;
}