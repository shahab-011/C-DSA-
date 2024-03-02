/*

1
2  3
4  5  6
7  8  9  10

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     int count=1;
//     while(row<=n){
//         int column=1;
//         while(column<=row){
//             cout<<count<<" ";
//             count=count+1;
//             column=column+1;
//         }
//         cout<<endl;
//         row=row+1;

//     }

//     return 0;
//} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count = count+1;
        }
        cout<<endl;
    }


    return 0;
}