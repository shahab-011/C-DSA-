/*

* * * *
*     *
*     *
* * * *

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     cin>>row>>col;

//     for(int i=1; i<=row; i++){
//         for(int j=1; j<=col; j++){
//             if(i==1 || i==row || j==1 || j==col){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            if(i==1 || i==4 || j==1 || j==4){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}