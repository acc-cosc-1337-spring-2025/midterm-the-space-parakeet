#include "question2.h"
#include <iostream>

using std::cout;

int main() {
    string dna1 = "GAGCCTACTAACGGGAT";
    string dna2 = "CATCGTAATGACGGCCT";
    cout << "DNA 1: " << dna1 << "\n";
    cout << "DNA 2: " << dna2 << "\n";
    cout << "P-Distance: " << get_rounded_answer(get_dna_p_distance(dna1, dna2), 4) << "\n";
    return 0;
}