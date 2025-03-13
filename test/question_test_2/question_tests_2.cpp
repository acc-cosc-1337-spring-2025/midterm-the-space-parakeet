#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

using std::abs;

bool rounded_equals(double num1, double num2, int precision) {
	return (abs(num1 - num2) <= precision);
}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test") {
	REQUIRE(test_config() == true);
}

TEST_CASE("Test function get_dna_p_distance") {
	REQUIRE(rounded_equals(get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT", 0.4118)));
	REQUIRE(rounded_equals(get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT", 0.3529)));
}
