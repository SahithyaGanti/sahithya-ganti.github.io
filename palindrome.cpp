#include <iostream>
using namespace std;
int main() {
    int num;
    int digit;
    int rev = 0;
    cout<<"Enter any number :"<<endl;
    cin>> num;
    int n = num;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    

    if (rev == n) {
        cout<<"PALINDROME"<<endl;
    } else {
        cout<<"NOT A PALINDROME"<<endl;
    }
    return 0;
}
