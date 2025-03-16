#include "question2.h"
#include <sstream>
#include <iomanip>

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

// returns a string representation of the answer, rounded to given precision
string get_rounded_answer(double dna_p_distance, int precision) {
    std::ostringstream rounded_answer;
    rounded_answer << std::fixed << std::showpoint 
    << std::setprecision(precision) << dna_p_distance;
    return rounded_answer.str();
}