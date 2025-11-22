#include "chap_4_x_q2.h"
#include <iostream>

double user_input_double_chap_4_x_q2() {
	double value{};
	std::cin>>value;
	return value;
}

char user_input_char_chap_4_x_q2() {
	char value{};
	std::cin>>value;
	return value;
}

double calculate_total_chap_4_x_q2() {
	std::cout << "Enter the first floating point value: \n";
	double first_value{ user_input_double_chap_4_x_q2() };
	std::cout << "Enter the second floating point value: \n";
	double second_value{ user_input_double_chap_4_x_q2() };
	std::cout << "Enter the operation (+, -, *, /): \n";
	char operation{ user_input_char_chap_4_x_q2() };
	if(operation== '+') {
		return first_value + second_value;
	} else if(operation == '-') {
		return first_value - second_value;
	} else if(operation == '*') {
		return first_value * second_value;
	} else if(operation == '/') {
		if(second_value != 0) {
			return first_value / second_value;
		} else {
			std::cout << "Error: Division by zero.\n";
			return 0;
		}
	} else {
		std::cout << "Error: Invalid operation.\n";
		return 0;
	}
}

void result_message_chap_4_x_q2() {
	double result{ calculate_total_chap_4_x_q2() };
	std::cout << "The result is: " << result << '\n';
}