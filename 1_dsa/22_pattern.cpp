/*

4 3 2 1 
4 3 2 1 
4 3 2 1
4 3 2 1

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=n;
//     while(row>=1){
//         int column=n;
//         while(column>=1){
//             cout<<column<<" ";
//             column=column-1;
//         }
//         cout<<endl;
//         row=row-1;
        
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}