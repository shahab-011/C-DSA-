#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array";
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
        for(int i=0; i<n-1; i++){
        for(int k=i+1; k<n; k++){
            if(arr[k]<arr[i]){
                int temp=arr[k];
                arr[k]=arr[i];
                arr[i]=temp;

            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}