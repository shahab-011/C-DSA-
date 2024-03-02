#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s+e/2;
    
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
       for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    //merge two sorted array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex]=first[index1];
            index1++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex]=second[index2];
            index2++;
            mainArrayIndex++;
        }
    }
    while(index1<len1){
        arr[mainArrayIndex]=arr[index1];
        mainArrayIndex++;
        index1++;
    }

        while(index2<len2){
        arr[mainArrayIndex]=arr[index2];
        mainArrayIndex++;
        index2++;
    }
}

void mergeSort(int arr[], int s, int e ){

    //base case
    while(s<=e){
        return;
    }
    int mid = (s+e)/2;

    //left part sort krna h
    mergeSort(arr,s,mid);

    //right part sort krna h 
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);

}

int main(){
    int arr[5]={2,5,47,9,6};
    int n=5;
    
    mergeSort(arr, 0 , n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}