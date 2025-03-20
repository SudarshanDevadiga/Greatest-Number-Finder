# Greatest Number Finder

A simple C++ program that prompts the user to enter two numbers and determines the greatest of the two.

A simple C++ program that finds the greatest of three numbers entered by the user.

## Description

This program takes two integer inputs from the user and compares them to find the greatest number. It demonstrates basic input/output operations and conditional statements in C++.

This program prompts the user to input three integers and determines which of the three is the greatest. It uses conditional statements to compare the numbers and outputs the result.

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

## Code Structure 2

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, greatest;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }
    cout << "The greatest number is: " << greatest << endl;
    return 0;
}


