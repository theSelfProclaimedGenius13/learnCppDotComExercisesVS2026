#include<iostream>
#include "chap_14_3_q2.h"

void result_message_chap_14_3_q2() {
	IntPair p1{ 1, 2 };
	IntPair p2{ 3, 4 };

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	std::cout << "p1 and p1 " << (p1.is_equal(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.is_equal(p2) ? "are equal\n" : "are not equal\n");
}