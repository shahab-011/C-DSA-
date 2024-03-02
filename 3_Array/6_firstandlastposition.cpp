#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int lastOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s=mid+1;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main(){
    int arr[9]={0,1,3,3,3,3,3,3,9};
    
    
    cout<<"First occurence : " <<firstOcc(arr, 9,3)<<endl;;
    cout<<"Last occurence : " <<lastOcc(arr, 9 ,3);

return 0;
}