#include <iostream>
#include "main.h"
#include "util/util.h"
#include "math/math.h"

using namespace std;

int main() {
    while (true) {
        cout << "Input a function to use\n";
        string function;
        cin >> function;
        if (function == "factorial") {
            factorial_in();
            break;
        } else if (function == "fibonacci") {
            cout << "Not implemented\n";
            continue;
        }
        else {
            cout << "That is not a valid function\n";
            continue;
        }
    }
    return 0;
}

int factorial_in() {
    while (true) {
        int n = num_in(" to take the factorial of");
        if (n < 0) {
            cout << "Please input a number that is greater than 0\n";
            continue;
        } else {
            cout << "The factorial of " << n << " is " << factorial(n) << "\n";
            break;
        }
    }
    return 0;
}