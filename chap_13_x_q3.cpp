#include<iostream>
#include"chap_13_x_q3.h"
template<typename T>
void print_triad_chap_13_x_q3(const Triad<T>& triad) {
	std::cout << "[" << triad.num1 << ", " << triad.num2 << ", " << triad.num3 << "]\n";
}

void result_message_chap_13_x_q3() {
	Triad triad1{ 1, 2, 3 };
	print_triad_chap_13_x_q3(triad1);
	Triad triad2{ 1.2, 3.4, 5.6 };
	print_triad_chap_13_x_q3(triad2);
}
