#include <iostream>
#include <vector>
#include <string>
#include <string_view>

template <typename T>
bool value_in_array_chap_16_8_q2(const std::vector<T>& arr, const T& name) {
	for (const auto& n : arr) {
		if (name == n) {
			return true;
		}
	}
	return false;
}

void result_message_chap_16_8_q2() {
	std::vector<std::string_view> names{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg",  "Holly" };
	std::cout << "Enter a name: \n";
	std::string n{};
	std::cin >> n;
	bool found{ value_in_array_chap_16_8_q2<std::string_view>(names, n) };
	if (found) {
		std::cout << n << " was found.\n";
	}
	else {
		std::cout << n << " was not found.\n";
	}
}