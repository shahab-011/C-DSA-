#include<iostream>
using namespace std;

int binarySearch(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        int square=mid*mid;
        if(square>n){
            e=mid-1;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
        else {
            return mid;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}


int main(){
    int n=36;
   cout<<binarySearch(n);
 //  int firstpart=binarySearch(n);
return 0;
}