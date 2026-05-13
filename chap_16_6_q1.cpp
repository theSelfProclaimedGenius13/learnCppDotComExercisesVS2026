#include <iostream>
#include <vector>

void result_message_chap_16_6_q1() {
	std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };
	std::size_t length{ arr.size() };
	for (std::size_t i{ 0 }; i < length ; i++) {
		std::cout << arr[i] << "\t";
	}
}