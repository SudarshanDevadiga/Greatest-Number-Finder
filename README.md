# Greatest Number Finder

A simple C++ program that prompts the user to enter two numbers and determines the greatest of the two.

## Description

This program takes two integer inputs from the user and compares them to find the greatest number. It demonstrates basic input/output operations and conditional statements in C++.

### Key Features
- User input for two numbers
- Conditional logic to determine the greatest number
- Simple output display

## Code Structure

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2, greatest;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > num2) {
        greatest = num1;
    } else {
        greatest = num2;
    }
    cout << "The greatest number is: " << greatest << endl;
    return 0;
}
