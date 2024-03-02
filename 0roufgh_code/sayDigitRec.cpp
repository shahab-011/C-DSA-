#include<iostream>
using namespace std;

void sayNo(int n, string arr[]){
    if(n==0){
        return;
    }
    //processing
    int digit = n%10;
    n = n/10;
  
    sayNo(n,arr);
      cout<<arr[digit]<<" ";
    


}

int main(){
    string arr[10] = {"zero", "one","two","three","four","six","seven","eight","nine","ten"};
    int n;
    cin>>n;
    sayNo(n , arr);
    

return 0;
}