/*
5 4 3 2 1
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1 
5 4 3 2 1 
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
            
//             cout<<n-j+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}