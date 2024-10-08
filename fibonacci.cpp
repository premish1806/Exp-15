// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    } else {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << n <<"th Fibonacci number in Fibonacci Sequence is : " <<fib(n);
}
