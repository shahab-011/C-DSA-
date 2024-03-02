#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = s;
    int count=0;
    for(int i=pivot+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<arr[j]){
            i++;
        }
        while(arr[j]>arr[i]){
            j++;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    } 
    return pivotIndex;

}

void quickSort(int arr[], int s, int e){
    //base casse
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}

int main(){

    int arr[5] = {4,6,1,2,7};
    int n = 5;
    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


return 0;
}