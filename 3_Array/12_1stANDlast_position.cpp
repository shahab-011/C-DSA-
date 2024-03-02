#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans = 1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid = s+(e-s)/2;
    }
    return ans ;
}

int lastOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans = 1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid = s+(e-s)/2;
    }
    return ans ;
}

int main(){
    int arr[6]={3,5,9,9,9,10};
    
    cout<<"First occurence : "<<firstOcc(arr, 6, 9);
    cout<<endl;
    cout<<"Last occurence : "<<lastOcc(arr, 6, 9);

    
return 0;
}