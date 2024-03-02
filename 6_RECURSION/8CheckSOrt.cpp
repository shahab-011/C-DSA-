#include<iostream>
using namespace std;

bool checkSort(int *arr, int size){
    if (size==0 || size==1)
    return true;
    

    if(arr[0]>arr[1])
    return true;

    else{
    bool ans = checkSort(arr+1, size-1);
    return ans;
    }
}
int main(){
    int arr[5]={2,4,9,16,48};
    int size=5;
    bool answer = checkSort(arr,size);

    if(answer){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }

return 0;
}