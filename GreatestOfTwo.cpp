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