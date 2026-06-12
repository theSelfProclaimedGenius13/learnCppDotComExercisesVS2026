#include <iostream>

constexpr int sum_of_digits_chap_20_3_q2(int n) {
	return (n / 10 == 0) ? n : n % 10 + sum_of_digits_chap_20_3_q2(n / 10);
}
void result_message_chap_20_3_q2() {
	int inp{};
	std::cout << "Enter a non-negative integer: ";
	std::cin >> inp;
	std::cout << "Sum of digits of " << inp << " is: " << sum_of_digits_chap_20_3_q2(inp) << std::endl;
}