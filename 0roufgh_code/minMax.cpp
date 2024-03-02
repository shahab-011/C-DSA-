#include<iostream>
using namespace std;

void printMaxMin(int arr[], int n){
       int max = arr[0];
       int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<max<<" "<<min<<" ";

}

int main(){
    int arr[5]={5,8,7,4,1};
    printMaxMin(arr,5);

 

return 0;
}