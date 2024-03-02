/*

*
* *
* * *
* * * *
* * * * *

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int column=1;
//         while(column<=row){
//             cout<<"*";
//             column = column+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
   

    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}