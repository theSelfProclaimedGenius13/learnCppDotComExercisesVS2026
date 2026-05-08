#include "chap_15_7_q1.h"
#include <iostream>

void result_message_chap_15_7_q1() {
	// Print a bunch of random numbers
	for (int count{ 1 }; count <= 10; ++count)
		std::cout << Random::get(1, 6) << '\t';

	std::cout << '\n';
}