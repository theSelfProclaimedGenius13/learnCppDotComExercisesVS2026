#include<iostream>

void print_array_chap_17_10_q2(const char arr[]) {
	const char* ptr{ arr };
	while (*ptr != '\0') {
		ptr++;
	}
	while (ptr != arr) {
		ptr--;
		std::cout << *ptr << " ";
	}
}

void result_message_chap_17_10_q2() {
	const char* arr = "Hello, World!";
	print_array_chap_17_10_q2(arr);
}