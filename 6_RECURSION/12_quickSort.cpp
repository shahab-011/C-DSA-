#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot=s;
    int count=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);

    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<arr[j]){
            i++;
        }
        while(arr[j]>arr[i]){
            i--;
        }
        if(arr[i]>pivotIndex && arr[j]<pivot){
            swap(arr[i],arr[j]);
                i++;
                j++;
            
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int arr[5]={5,1,9,4,6};
    int n=5;
    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}