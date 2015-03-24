// Created by Strikingwolf
#include "math.h"

int factorial(int n) {
    if (n == 0) {return 1;} else {return n * factorial(n-1);}
}
