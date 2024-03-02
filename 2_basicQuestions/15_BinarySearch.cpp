#include<iostream>
using namespace std;

int binarySearch(int ary[], int n, int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(ary[mid]==key){
            return mid;
        }
        else if(ary[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int ary[n];
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }
    int key;
    cout<<"Enter key:";
    cin>>key;

    cout<<binarySearch(ary,n,key);

return 0;
}