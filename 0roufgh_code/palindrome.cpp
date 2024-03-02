#include<iostream>
using namespace std;

    bool isPalindrome(int x) {
        int count = 0;
        while(x<0){
            int lastDigit = x%10;
            int reverse = count*10 + lastDigit;
            count++;
        }
        if(count == x){
            return true;
        }
        else{
            return false;
        }
        return true;
    }

int main(){
    int x;
    cin>>x;
    isPalindrome(x);

return 0;
}

