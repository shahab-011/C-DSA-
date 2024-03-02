#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int keyy){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==keyy){
            return mid;
        }
        else if(arr[mid]<keyy){
            s=mid+1;
            
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int ary[4]={2,5,8,11};
    int key;
    cin>>key;

    cout<<binarySearch(ary,4,key);


return 0;
}