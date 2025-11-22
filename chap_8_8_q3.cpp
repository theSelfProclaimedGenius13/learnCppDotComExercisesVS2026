#include<iostream>

void print_pattern_1_chap_8_8_q3(int n) {
	while (n > 0) {
		for (int i{ n }; i > 0; i--) {
			std::cout << i << " ";
		}
		std::cout << "\n";
		n--;
	}
}
void result_message_chap_8_8_q3() {
	int n;
	std::cout << "Enter a positive integer: ";
	std::cin >> n;
	print_pattern_1_chap_8_8_q3(n);
}