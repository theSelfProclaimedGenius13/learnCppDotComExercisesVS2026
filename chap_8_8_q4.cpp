#include<iostream>

void print_pattern_1_chap_8_8_q4(int n) {
	for (int i{ 1 }; i <= n; i++) {
		for (int j{ n }; j >= 1; j--) {
			if(j<=i) {
				std::cout<<" " << j;
			} else {
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}
}
void result_message_chap_8_8_q4() {
	int n;
	std::cout << "Enter the number of rows: ";
	std::cin >> n;
	print_pattern_1_chap_8_8_q4(n);
}