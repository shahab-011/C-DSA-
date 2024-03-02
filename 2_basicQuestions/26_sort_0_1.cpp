#include<iostream>
using namespace std;

void print(int arr[], int m){
    for(int i=0; i<m; i++){
        cout<<arr[i]<<" ";
    }
}

void sort01(int arr[], int n){
    int i=0; 
    int j=n;
    while(i>j){
        while(arr[i]==0 && arr[j]==1 && i<j){
            i++;
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

int main(){
    int arr[5] = {0,1,1,0,1};
    sort01(arr, 5);
    print(arr, 5);

return 0;
}