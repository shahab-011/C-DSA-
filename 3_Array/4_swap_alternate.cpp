#include<iostream>
using namespace std;

void print(int arr[],int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}


void alternate(int arr[], int n){
  for(int i=0; i<n; i=i+2){
    if(i+1<n){
      swap(arr[i],arr[i+1]);
    }
  }

}

int main(){
  int arr[5]={5,7,9,3,1};
  alternate(arr,5);
  print(arr,5);
  

return 0;
}