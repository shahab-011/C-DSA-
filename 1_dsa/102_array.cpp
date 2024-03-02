#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    int largest2 = 0;

    for(int i=0; i<n; i++){
        if(arr[i]>largest2){
            largest2 = arr[i];
        }
    }
    int slarge;
    
    slarge = arr[0];
    for(int i=0; i<n; i++){
      if(slarge<arr[i]){
        if(arr[i]!=largest2)
            slarge = arr[i];
      }
    }

    cout<<slarge;

return 0;
}