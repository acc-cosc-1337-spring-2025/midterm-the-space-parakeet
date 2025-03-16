#include "question4.h"
#include <iostream>

using std::cout;

int main() {
    string dna = "GATGGAACTTGACTACGTAAATT";
    cout << "DNA: " << dna << "\n";
    cout << "RNA: " << transcribe_dna_to_rna(dna) << "\n";
    return 0;
}