#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
 cout<<endl;

}

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=n){
        if(a[s] != a[e]){
            return 0;
        }

        else{
            s++;
            e--;
        }
    }

}

int main(){
    char name[10];
    cout<<"Enter your name:";
    cin>>name;
   
    int len = getLength(name);
    cout<<"Length:" <<getLength(name);
    reverse(name , len);
    cout<<"Palindrome or not : "<< checkPalindrome(name, len);
  


return 0;
}