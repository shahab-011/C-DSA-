#include<iostream>
using namespace std;
int reverse(int arr[], int size){
    int s=0;
    int e=size;
    while(s<=size){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
for (int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int ary[n];
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }
    cout<<reverse(ary,n);



return 0;
}