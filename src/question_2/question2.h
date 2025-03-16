#include <string>

using std::string;

bool test_config();
double get_dna_p_distance(const string& dna1, const string& dna2);
string get_rounded_answer(double dna_p_distance, int precision);