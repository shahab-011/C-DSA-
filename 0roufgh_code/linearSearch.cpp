#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
        for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;

}

int main(){
int arr[4]={4,6,7,9};
    
    int key;
    cin>>key;
    cout<<linearSearch(arr,4,key);

return 0;
}