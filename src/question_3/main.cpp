#include "question3.h"
#include <iostream>

using std::cout;

int main() {
    int a, b;
    while (true) {
        a = input_int("Enter integer a in range [1, 200]. (0 to quit): ", 0, 200);
        if (a == 0) return EXIT_SUCCESS;
        b = input_int("Enter integer b in range [1, 200]. (0 to quit): ", 0, 200);
        if (b == 0) return EXIT_SUCCESS;
        cout << "GCD of integers a and b: " << get_gcd(a, b) << "\n";
    }
    return EXIT_FAILURE;
}