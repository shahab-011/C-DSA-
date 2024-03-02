// Searching in array (Binary search).

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of arry:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter arry input:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key:"<<endl;
    cin>>key;

    cout<<binarySearch(arr, n, key);

    return 0;
}