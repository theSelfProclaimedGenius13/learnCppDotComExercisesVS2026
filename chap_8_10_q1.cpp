#include<iostream>
void print_even_numbers_chap_8_10_q1(int n) {
	for (int i{ 2 }; i <= n; i += 2) {
		std::cout << i << " ";
		if(i%5==0) {
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

void result_message_chap_8_10_q1() {
	int n;
	std::cout << "Enter a positive integer: ";
	std::cin >> n;
	print_even_numbers_chap_8_10_q1(n);
}