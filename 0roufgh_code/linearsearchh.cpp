#include<iostream>
using namespace std;

int linear(int arr[], int n, int keyy){
    for(int i=0; i<n; i++){
        if(arr[i]==keyy){
            return i;
        }
    }



}

int main(){
    int arr[5]={1,8,9,7,3};
    int n = 5;
    int keyy = 9;
    int ans = linear(arr,n,keyy);
    cout<<ans;

return 0;
}