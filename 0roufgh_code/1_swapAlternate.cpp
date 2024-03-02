#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    
    for(int i=0; i<n; i=i+2){
        if(arr[i+1]<n){
            swap(arr[i], arr[i+1]);
        }
}
        for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void findunique(int arr[], int num){
    

}

int main(){
    int arr[5]={4,9,8,7,3};

    swapAlternate(arr,5);
    


return 0;
}

