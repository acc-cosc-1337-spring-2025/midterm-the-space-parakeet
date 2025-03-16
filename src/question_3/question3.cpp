#include "question3.h"
#include <cmath>
#include <iostream>
#include <limits>

using std::abs;
using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;

bool test_config() {
    return true;
}

int get_gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a == 0) return b;
	if (b == 0) return a;
	if (a == b) return a;
	int larger_num = a * (a > b) + b * (b > a);
	int smaller_num = a * (a < b) + b * (b < a);
	int remainder;
	do {
		remainder = larger_num % smaller_num;
		larger_num = smaller_num;
		smaller_num = remainder;
	} while (smaller_num > 0);
	return larger_num;
}

int input_int(string prompt, int min, int max) {
    int input;
    while (true) {
        cout << prompt;
        cin >> input;
        if (cin.good() && (min <= input && input <= max)) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return input;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please try again.\n";
    }
}