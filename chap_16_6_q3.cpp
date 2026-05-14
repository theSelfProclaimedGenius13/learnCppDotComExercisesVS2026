#include<iostream>
#include<vector>
#include <limits>

template <typename T>
void print_array_chap_16_6_q3(const T& arr) {
	std::size_t length{ arr.size() };
	for (std::size_t i{ 0 }; i < length; i++) {
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
int input_number_chap_16_6_q3() {
	int number{};
	std::cout << "Enter a number: between 1-9:\n";
	std::cin >> number;
	if ((!std::cin) || (number < 1) || (number > 9))  {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if ((number) && ((number >= 1) && (number <= 9))) {
		return number;

	}
	else {
		std::cout << "Invalid input. Please enter a valid number." << std::endl;
		return input_number_chap_16_6_q3();
	}
}
template <typename T>
void match_number_chap_16_6_q3(const T& arr) {
	int number{ input_number_chap_16_6_q3() };
	std::size_t length{ arr.size() };
	int found_index{-1};
	bool found{ false };
	for (std::size_t i{ 0 }; i < length; i++) {
		if (arr[i] == number) {
			found_index=  static_cast<int>(i);
			found = true ;
			break;
		}
	}
	if (found) {
		std::cout << "The number " << number << " is found at index " << found_index << "." << std::endl;
	}
	else {
		std::cout << "The number " << number << " is not found in the array." << std::endl;
	}
	std::cout << std::endl;
}
void result_message_chap_16_6_q3() {
	std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };
	match_number_chap_16_6_q3(arr);
}
