/*
  1  2  3  4 
  5  6  7  8
  9  10 11 12
  13 14 15 16

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count = count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i = i+1;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }

    return 0;
}