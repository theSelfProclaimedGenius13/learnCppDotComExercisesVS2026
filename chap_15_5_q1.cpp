#include "chap_15_5_q1.h"
#include<iostream>
#include <string>
void result_message_chap_15_5_q1() {
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print_triad();
	std::cout << '\n';
	std::cout << t1.get_first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print_triad();
	std::cout << '\n';
}