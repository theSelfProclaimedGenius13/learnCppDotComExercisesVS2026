#include<iostream>
void print_binary_chap_20_3_q3(unsigned int n) {
	if (n >1 ) {
		print_binary_chap_20_3_q3(n / 2);	
	}
	std::cout << n % 2;
}

void result_message_chap_20_3_q3() {
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cout << "Binary representation of " << number << " is: ";
	print_binary_chap_20_3_q3(static_cast<unsigned int>(number));
	std::cout << "\n";
}