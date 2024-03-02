#include<iostream>
using namespace std;

int linearSearch(int ary[], int n, int key){
    for(int i=0; i<n; i++){
        if(ary[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int ary[n];
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }
    int key;
    cout<<"Enter key";
    cin>>key;

    cout<<linearSearch(ary,n,key);

return 0;
}