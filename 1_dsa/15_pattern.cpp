/*   1 1 1 1 1
     2 2 2 2 2
     3 3 3 3 3 
     4 4 4 4 4
     5 5 5 5 5   */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
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
    int row,column;
    cin>>row>>column;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}