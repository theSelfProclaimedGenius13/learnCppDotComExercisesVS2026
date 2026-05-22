#include <iostream>

int inp_chap_17_7_q3() {
	int num{};
	std::cout << "Enter a single digit integer or -1 to quit:\t";
	std::cin >> num;
	if (!std::cin) {
		std::cout << "Invalid input. Please enter a single digit integer or -1 to quit.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return inp_chap_17_7_q3();
	}
	else {
		if (!std::cin.eof() && std::cin.peek() != '\n') {
			std::cout << "Invalid input. Please enter a single digit integer or -1 to quit.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return inp_chap_17_7_q3();
		}
		else {
			return num;
		}
		
	}
}

void result_message_chap_17_7_q3() {
	constexpr int per_sq[]{ 0,1,4,9 };
	while (true) {
		int num{ inp_chap_17_7_q3() };
		bool found{ false };
		if (num == -1) {
			std::cout << "Exiting the program.\n";
			break;
		}
		else {
			for (const auto& sq : per_sq) {
				if (sq == num) {
					std::cout << num << " is a perfect square.\n";
					found = true;
					break;
				}
			}
			if (!found) {
				std::cout << num << " is not a perfect square.\n";
			}
		}
	}
}