# Exp-15 Recursion

## Aim:
The aim of this assignment is to demonstrate the implementation of basic recursive functions in C++ to calculate the factorial of a number, generate Fibonacci numbers, and compute the sum of the first 'n' natural numbers.

## Software Used:
- Dev c++
  
## Theory:
Recursion is a programming technique where a function calls itself to solve a problem. Instead of solving the problem all at once, recursion breaks it into smaller, easier sub-problems. Each time the function calls itself with a simpler version of the problem, and eventually, it reaches a base case where the problem is simple enough to be solved directly. This technique is useful for problems like calculating factorials, finding Fibonacci numbers, or summing natural numbers.

## Program 1: Find factorial of a number using recursion.
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/ebce8617-78a4-4eac-add7-cb4a236156da)


## Program 2: Find Fibonacci number in the Fibonacci sequence using recursion.
<strong> Code: </strong>
<br>
```cpp
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

    cout << n << "th Fibonacci number in Fibonacci Sequence is : " << fib(n) << endl;
    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/aa2f625f-b7a8-4972-8e67-50863bc3773e)


## Program 3: Find sum of n natural numbers using recursion, n is the value entered by user.
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/0df831b5-0091-496d-92ff-e2e2226c78e6)


## Conclusion:
we learned how to use recursion to solve problems like calculating factorials, generating Fibonacci numbers, and adding natural numbers. 
