#include <iostream>
#include "main.h"

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

int factorial(int n) {
    if (n == 0) {return 1;} else {return n * factorial(n-1);}
}

int factorial_in() {
    while (true) {
        int n = num_in(" to take the facorial of");
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

int num_in(string option) {
    while (true) {
        cout << "Input a number" << option << "\n";
        string s;
        cin >> s;
        try {
            return stoi(s);
            break;
        } catch (invalid_argument) {
            cout << "Please input a number\n";
            continue;
        }
    }
}