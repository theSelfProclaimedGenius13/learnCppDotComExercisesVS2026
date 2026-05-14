#include<iostream>
#include<vector>
#include <limits>

template <typename T>
void print_array_chap_16_6_q4(const T& arr) {
	std::size_t length{ arr.size() };
	for (std::size_t i{ 0 }; i < length; i++) {
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
template <typename T>
T input_number_chap_16_6_q4() {
	T number{};
	std::cout << "Enter a number: between 1-10:\n";
	std::cin >> number;
	if ((!std::cin) || (number < 1) || (number >= 10)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if ((number) && ((number >= 1) && (number <= 10))) {
		return number;

	}
	else {
		std::cout << "Invalid input. Please enter a valid number." << std::endl;
		return input_number_chap_16_6_q4<T>();
	}
}
template <typename T>
void match_number_chap_16_6_q4(const std::vector<T>& arr) {
	T number{ input_number_chap_16_6_q4<T>() };
	std::size_t length{ arr.size() };
	int found_index{ -1 };
	bool found{ false };
	for (std::size_t i{ 0 }; i < length; i++) {
		if (arr[i] == number) {
			found_index = static_cast<int>(i);
			found = true;
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
void result_message_chap_16_6_q4() {
	std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };
	match_number_chap_16_6_q4(arr);
	std::vector arr2{ 4.4, 6.6, 7.7, 3.3, 8.8, 2.2, 1.1, 9.9 };
	match_number_chap_16_6_q4(arr2);
}
