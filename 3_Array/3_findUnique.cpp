#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }
    return ans;
}



int main(){
    int arr[5]={4,6,1,1,6};
    cout<<findUnique(arr,5); 

    
return 0;
}