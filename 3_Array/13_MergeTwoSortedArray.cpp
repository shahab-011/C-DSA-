#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0, k=0;

    while(i<n && i<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    //copy remaining array
    while(i<n){
        arr3[k]=arr1[i];
    }
    while(j<m){
        arr3[k]=arr1[j];
    }
}

void print(int arr3[], int k){
    for(int i=0; i<k; i++){
        cout<<arr3[k]<<" ";
    }
}

int main(){
    int arr1[5]={2,3,5,7,9};
    int arr2[3]={1,4,6};
    int arr3[8]={0};
    merge(arr1, 5 ,arr2 ,3,arr3);
    print(arr3,8);

return 0;
}