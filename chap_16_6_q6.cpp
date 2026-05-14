#include <iostream>
#include <vector>
#include<string_view>

int input_number_chap_16_6_q6() {
	int number{};
	std::cout << "Enter a number greater than 2:\n";
	std::cin >> number;
	if ((!std::cin) || (number <= 2) ) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if ((number) && (number >= 3)) {
		return number;
	}
	else {
		std::cout << "Invalid input. Please enter a valid number.\n";
		return input_number_chap_16_6_q6();
	}
}

void print_words_chap_16_6_q6() {
	static const std::vector<int> divisors{ 3,5,7,11,13,17,19 };
	static const std::vector<std::string_view> words{ "fizz", "buzz","pop","bang","jazz","pow","boom" };
	int number= input_number_chap_16_6_q6();
	for (int i{ 1 };i<=number;i++){
		bool printed{ false };
		for (size_t j{ 0 }; j < divisors.size(); j++) {
			if (i % divisors[j] == 0) {
				std::cout << words[j];
				printed = true;
			}
		}
		if (!printed) {
			std::cout << i;
		}
		std::cout << "\n";
	}
}

void result_message_chap_16_6_q6() {
	print_words_chap_16_6_q6();
}