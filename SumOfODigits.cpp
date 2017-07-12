#include <iostream>
using namespace std;
int main() {
    int num;
    int digit;
    int sum = 0;
    cout<<" Enter any number :\n";
    cin>> num;
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    cout<<"sum of the digits of the given number is = "<<sum<<endl;
    return 0;
}
