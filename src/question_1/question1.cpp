#include "question1.h"

bool test_config() {
    return true;
}

bool is_palindrome(const string& str) {
    int i = 0;
    int j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) 
            return false;
        i++; j--;
    }
    return true;
}