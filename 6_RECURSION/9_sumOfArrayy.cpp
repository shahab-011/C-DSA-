#include<iostream>
using namespace std;

int arrSum(int arr[], int size){
    //base case
    if (size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart = arrSum(arr+1,size-1);
    int sum = arr[0]+remainingPart;
    return sum;


}

int main(){
    int arr[5]={2,4,6,8,1};
    int size=5;
    int sum = arrSum(arr,size);
    cout<<sum;

return 0;
}