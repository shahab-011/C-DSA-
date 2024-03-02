#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
    //cout<<"Unique Element : "<<ans;
}

int main(){
    int arr[5]={5,5,1,3,1};
    cout<<"Unique Element : "<<findUnique(arr,5);


return 0;
}