#include<iostream>
using namespace std;

void printNo(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printNo(n-1);

}

int main(){
    int n;
    cin>>n;
    printNo(n);

return 0;
}