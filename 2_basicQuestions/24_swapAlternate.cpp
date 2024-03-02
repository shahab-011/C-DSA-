#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,6,778,1,3};

    for(int i=0; i<5; i=i+2){
        if(i+1<6){
            swap(arr[i],arr[i+1]);
        }

    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}