#include<iostream>
#include"chap_6_8_q2.h"

bool is_even_chap_6_8_q2(int number) {
	return bool{ !(number % 2) };
}
int input_number_chap_6_8_q2 (){
	int number;
	std::cin >> number;
	return number;
}
void result_message_chap_6_8_q2 () {
	std::cout << "Enter an integer: ";
	const int number = input_number_chap_6_8_q2();
	if (is_even_chap_6_8_q2(number)) {
		std::cout << "The number is Even.\n";
	} else {
		std::cout << "The number is Odd.\n";
	}
}
