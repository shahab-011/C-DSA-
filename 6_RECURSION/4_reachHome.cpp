#include<iostream>
using namespace std;

void reachHome(int scr, int dest){
    //base case
    if(scr==dest)
        cout<<"Reached";
         return;
    //Processing
    scr++;
    reachHome(scr, dest);
        
}

int main(){
    int dest=10;
    int scr=1;
    reachHome(scr,dest);
return 0;
}