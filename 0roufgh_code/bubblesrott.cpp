#include<iostream>
using namespace std;

void insertion(int arr[], int n){

    for(int i=1; i<=n-1; i++){
        int current = arr[i];
        int j=i;
        while(arr[j-1]>current &&  j>0){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }



    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={5,1,9,4,3,5};
    int n=6;
    insertion(arr,n);

return 0;
}