#include<iostream>
using namespace std;

void print(int num){
    cout<<num;
}

int add(int num1, int num2){
    print(num1);
    print(num2);
    int sum = num1 + num2;
    
    //cout<<sum;
    return sum;
}

int main(){
    int a=5;
    int b=8;
    add(a,b);

return 0;
}