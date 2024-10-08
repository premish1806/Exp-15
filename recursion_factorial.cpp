// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
