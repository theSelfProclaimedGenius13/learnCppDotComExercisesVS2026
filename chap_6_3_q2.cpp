#include<iostream>

int input_number_chap_6_3_q2 () {
	int number;
	std::cin >> number;
	return number;
}

constexpr bool is_even_or_odd_chap_6_3_q2 (const int number) {
	if (number % 2 == 0) {
		return true;
	} 
	return false;
}
constexpr void print_is_even_or_odd_chap_6_3_q2(const bool is_even_or_odd) {
	if (is_even_or_odd) {
		std::cout << "The number is even.\n";
	} else {
		std::cout << "The number is odd.\n";
	}
}

void result_message_chap_6_3_q2 () {
	std::cout << "Enter an integer: ";
	const int number = input_number_chap_6_3_q2();
	bool is_even_or_odd{ is_even_or_odd_chap_6_3_q2(number) };
	print_is_even_or_odd_chap_6_3_q2(is_even_or_odd);
}