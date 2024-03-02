#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        int remPart=linearSearch(arr+1,size-1,key);
        return remPart;
    }
}

int main(){
    int arr[5]={1,5,48,7,9};
    int size = 6;
    int key=48;
    bool ans = linearSearch(arr, size, key);
    if(ans){
        cout<<"key is present";
    }
    else{
        cout<<"Key is not present";
    }

return 0;
}