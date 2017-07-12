#include <iostream>
using namespace std;
int main() {
    int num;
    int digit;
    int sum = 0;
    cout<<"Enter any number :"<<endl;
    cin>> num;
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }
        cout<<"Sum = "<<sum<<endl;
        return 0;
        
    }



