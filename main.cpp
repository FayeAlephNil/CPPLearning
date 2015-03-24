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
            vector<int> result = factorial_in();
            cout << "The factorial of " << result[0] << " is " << result[1] << "\n";
            break;
        } else if (function == "fibonacci") {
            vector<int> result = fibbonacci_in();
            cout << "Stage " << result[0] << " in the fibonacci sequence is " << result[1] << "\n";
            break;
        }
        else {
            cout << "That is not a valid function\n";
            continue;
        }
    }
    return 0;
}

vector<int> factorial_in() {
    while (true) {
        int n = num_in(" to take the factorial of");
        if (n < 0) {
            cout << "Please input a number that is greater than 0\n";
            continue;
        } else {
            return {n, factorial(n)};
        }
    }
}

vector<int> fibbonacci_in() {
    int n = num_in(" to find the fibonacci stage of");
    return  {n, fibonacci(n)};
}