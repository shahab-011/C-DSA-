#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,7,9,1,3};

    int max=arr[0];
    int min=arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]>arr[max]){
            max = arr[i];
        }
        if(arr[i]<arr[min]){
        min = arr[i];
        }
    }
    
 
    cout<<"Maximum num is : "<<max<<endl;
    cout<<"Minimum num is : "<<min<<endl;

return 0;
}