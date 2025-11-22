#include<iostream>

int input_number_chap_7_3_q1() {
	int number{};
	std::cin >> number;
	return number;
}
bool is_greater_than_chap_7_3_q1(const int& smaller, const int& larger) {
	return bool (larger>smaller);
}
void swap_or_not_chap_7_3_q1(int& smaller, int& larger) {
	if (!is_greater_than_chap_7_3_q1(smaller, larger)) {
		const int temp{ smaller };
		smaller = larger;
		larger = temp;
	}
}

void result_message_chap_7_3_q1() {
	std::cout << "Enter an integer:\t";
	int smaller{ input_number_chap_7_3_q1() };
	std::cout << "Enter a larger integer:\t";
	int larger{ input_number_chap_7_3_q1() };
	std::cout << "Swapping if necessary...\n";
	swap_or_not_chap_7_3_q1(smaller, larger);
	std::cout << "The smaller integer is " << smaller << "\nThe larger integer is " << larger << ".\n";
}