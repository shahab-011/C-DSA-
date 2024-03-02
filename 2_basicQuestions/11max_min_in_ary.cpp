#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int ary[n];
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0; i<n; i++){
        maxNo=max(maxNo,ary[i]);
        minNo=min(minNo,ary[i]);
    }

    cout<<maxNo<<"  "<<minNo;



return 0;
}