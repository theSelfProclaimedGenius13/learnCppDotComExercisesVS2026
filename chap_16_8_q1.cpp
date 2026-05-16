#include <iostream>
#include <vector>
#include <string>

void result_message_chap_16_8_q1() {
	std::vector<std::string> names{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg",  "Holly" };
	std::cout << "Enter a name: \n";
	std::string n{};
	std::cin >> n;
	bool found{ false };
	for (std::string_view name : names) {
		if (name == n) {
			std::cout << n << " was found.\n";
			found = true;
			break;
		}
	}
	if (!found) {
		std::cout << n << " was not found.\n";
	}
}