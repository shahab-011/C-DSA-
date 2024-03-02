/*Print this pattern : * * * * 
                       * * * *
                       * * * *
                       * * * *
 */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j = j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

//    return 0;
//}
#include <iostream>
using namespace std;

int main(){
    int row,column;
    cin>>row>>column;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}