#include <iostream>
using namespace std;
int main() {
    int number, factorial = 1;
cout << "Enter a number: ";
    cin >> number;

    int i = 1;
    while (i <= number) {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << number << " = " << factorial <<endl;

    return 0;
}