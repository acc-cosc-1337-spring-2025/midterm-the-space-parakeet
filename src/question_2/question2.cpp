#include "question2.h"
#include <cmath>

bool test_config() {
    return true;
}

// assumes sequences of DNA are of equal length
double get_dna_p_distance(const string& dna1, const string& dna2) {
    int total_length = dna1.length();
    int difference = 0;
    int i = total_length;
    while (i --> 0)
        if (dna1[i] != dna2[i])
            difference++;
    return static_cast<double>(difference) / total_length;
}