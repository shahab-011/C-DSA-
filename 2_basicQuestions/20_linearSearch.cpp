#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
        for(int i=0; i<size; i++){
        if(arr[i]==key){
            return i;
        }
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key :";
    cin>>key;

    cout<<"Key index at : "<<linearSearch(arr, n, key);


return 0;
}