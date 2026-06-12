#include <iostream>

constexpr int factorial_chap_20_3_q1(int n) {
	return (n <= 1) ? 1 : (n * factorial_chap_20_3_q1(n - 1));
}

void result_message_chap_20_3_q1() {
	int inp{};
	std::cout << "Enter a non-negative integer: ";
	std::cin >> inp;
	for (int i{ 0 }; i <= inp; i++) {
		std::cout << "Factorial of " << i << " is: " << factorial_chap_20_3_q1(i) << std::endl;
	}
}