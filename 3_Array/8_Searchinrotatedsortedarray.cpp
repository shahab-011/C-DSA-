#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }


}

int main(){
    int arr[5]={18,21,5,9,10};

    cout<<search(arr, 5);

return 0;
}