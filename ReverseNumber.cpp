#include <iostream>
using namespace std;
int main() {
    int num;
    int digit;
    int rev = 0;
    cout<<"Enter any number :"<<endl;
    cin>> num;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    cout<<" Reverse of the given number is = "<<rev<<endl;
    return 0;
}

