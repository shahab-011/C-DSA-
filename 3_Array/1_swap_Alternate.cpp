#include<iostream>
using namespace std;
int main(){
    int arr[7]={8,7,9,5,3,1,45};
    for(int i=0; i<7; i=i+2){
        if(i+1<7){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }


return 0;
}