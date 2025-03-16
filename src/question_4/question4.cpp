#include "question4.h"

bool test_config() {
    return true;
}

string transcribe_dna_to_rna(string dna) {
    int i = dna.length();
    while (i --> 0)
        if (dna[i] == 'T') 
            dna[i] = 'U';
    return dna;
}