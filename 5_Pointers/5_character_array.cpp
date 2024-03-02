#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4};
    char ch[6]="abcde";
    cout<<arr<<endl;
    cout<<ch<<endl;

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;
    cout<<*p<<endl;


return 0;
}