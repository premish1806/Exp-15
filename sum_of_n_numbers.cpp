// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        cout << "Number should be greater than 1" << endl;
    }
    if (n == 1) {
        return 1;
    } else {
        return (n + sum(n - 1));
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
    return 0;
}
