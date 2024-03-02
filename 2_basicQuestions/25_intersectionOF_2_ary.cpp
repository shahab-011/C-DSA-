#include<iostream>
#include<vector>
using namespace std;

int intersection(int arr1[], int arr2[], int size1,int size2){

    int i=0,j=0;
    vector<int> ans;
    while(i<size1 && j<size2 ){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    
return ans;
}

int main(){
    int arr1[6]={1,2,2,2,3,4};
    int arr2[4]={2,2,3,3};
    cout<<intersection(arr1, arr2, 5 , 3);


return 0;
}