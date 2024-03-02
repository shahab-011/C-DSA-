#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

}

int main(){
    int even[6] = {4,5,11,7,26,25};
    int odd[7] = {7,9,15,4,79,3,1};
    swapAlternate(even,6);
    swapAlternate(odd,7);

return 0;
}