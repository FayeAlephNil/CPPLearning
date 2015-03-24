// Created by Strikingwolf
#include <sys/types.h>
#include "math.h"

int factorial(int n) {
    if (n == 0) {return 1;} else {return n * factorial(n-1);}
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else if (n < 0) {
        uint pos_n = (uint) n;
        return ((-1) ^ pos_n) * fibonacci(pos_n);
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
