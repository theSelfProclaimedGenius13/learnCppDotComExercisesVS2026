#include <iostream>
int sumTo(int n) {
	if (n <= 0) {
		return 0;
	}
	else {
		return n + sumTo(n - 1);
	}
}

void result_message_chap_8_10_q2() {
	int num;
	std::cout << "Enter a positive integer: ";
	std::cin >> num;
	std::cout << "The sum of integers from 1 to "<<num<<" is:\n" << sumTo(num) << std::endl;
}
