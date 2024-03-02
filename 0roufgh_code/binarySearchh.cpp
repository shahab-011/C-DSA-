#include<iostream>
using namespace std;

int binary(int arr[], int n, int keyy){
    int s=0;
    int e=n;
    int mid = (s+e)/2;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==keyy){
            return mid;
        }
        else if(arr[mid]>keyy){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
}

int main(){
    int arr[5]={1,3,5,8,9};
    int n=5;
    int keyy=8;
    int ans = binary(arr,n,keyy);
    cout<<ans;

return 0;
}