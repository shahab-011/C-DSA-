#include<iostream>
using namespace std;

void reachHome(int s, int e){
    if(s==e){
        cout<<"reached home";
        return;
    }
    s++;
    reachHome(s,e);
}

int main(){
    int s=1 , e=10;
    reachHome(s,e);

return 0;
}