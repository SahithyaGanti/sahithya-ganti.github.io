#include <iostream>
using namespace std;
int main() {
    int num;
    int fact = 1;
    cout<<" Enter any number :"<<endl;
    cin>> num;
    while (num >= 1) {
        fact *= num;
        num--;
    }
    cout<<"Factorial of the given number is = "<<fact<<endl;
    return 0;
}
