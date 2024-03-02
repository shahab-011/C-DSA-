#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int ary[n];
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }
    for(int i=0; i<n; i++){
        cout<<ary[i];
    }
return 0;
}