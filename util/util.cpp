// Created by Strikingwolf
#include <iostream>;
#include "util.h"

using namespace std;

int num_in(string option) {
    while (true) {
        cout << "Input a number" << option << "\n";
        string s;
        cin >> s;
        try {
            return stoi(s);
        } catch (invalid_argument) {
            cout << "Please input a number\n";
            continue;
        }
    }
}