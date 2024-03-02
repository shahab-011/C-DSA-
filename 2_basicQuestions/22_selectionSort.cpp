#include<iostream>
using namespace std;

int selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int k=i+1; k<n; k++){
            if(arr[k]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;

            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<selectionSort(arr, n);

return 0;
}