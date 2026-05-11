#include <iostream>
#include <vector>


auto calculate_chap_16_2_q4(const std::vector<int>& numbers, char oper) {
	if (oper == '+') {
		auto sum{ 0 };
		for(const auto& num : numbers) {
			sum += num;
		}
		return sum;
	}
	else{
		auto product{ 1 };
		for (const auto& num : numbers) {
			product *= num;
		}
		return product;
	}
}

void result_message_chap_16_2_q4() {
	std::cout << "Enter 3 Integers:\n";
	std::vector<int> numbers(3);
	for (int i = 0; i < 3; i++) {
		std::cin >> numbers[i];
	}
	std::cout << "The Sum Is: \n" << calculate_chap_16_2_q4(numbers, '+') << "\n";
	std::cout << "The Product Is:\n" << calculate_chap_16_2_q4(numbers, '*') << "\n";

}