#include<iostream>
void print_array_chap_17_10_q1(const char* arr) {
	while((*arr) != '\0') {
		std::cout << *arr << " ";
		arr++;
	}
}

void result_message_chap_17_10_q1() {
	const char* arr = "Hello, World!";
	print_array_chap_17_10_q1(arr);
}