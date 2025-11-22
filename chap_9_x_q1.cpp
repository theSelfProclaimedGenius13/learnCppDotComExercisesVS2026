#include<iostream>
#include<random>
#include<chrono>

namespace ran {
	inline std::mt19937& get_generator() {
		//std::random_device rd;
		static std::mt19937 gen(static_cast<unsigned int>(
			std::chrono::steady_clock::now().time_since_epoch().count()));
		return gen;
	}
	inline int get_random_number(int& min, int& max) {
		std::uniform_int_distribution<> dist(min, max);
		return dist(get_generator());
	}
}

int num_inputs_chap_9_x_q1() {
	int n;
	std::cin >> n;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return n;
}

int yes_or_no_chap_9_x_q1() {
	char response;
	std::cin >> response;
	if (response == 'y' || response == 'Y') {
		return 1;
	}
	else {
		return 0;
	}
}

void generate_random_number_chap_9_x_q1(int& min, int& max, int& chances) {
	int random_number = ran::get_random_number(min, max);
	std::cout << "Random number generated between " << min << " and " << max << ":\n";
	for (int i = 0; i < chances; ++i) {
		std::cout << "Enter your guess (" << (i + 1) << "/" << chances << "): ";
		int guess = num_inputs_chap_9_x_q1();
		if (guess == random_number) {
			std::cout << "Congratulations! You guessed the correct number: " << random_number << "\n";
			return;
		}
		else if (guess < random_number) {
			std::cout << "Your guess is too low.\n";
			std::cout << "Do you want to try again? (y/n):\n ";
			int try_again = yes_or_no_chap_9_x_q1();
			if (try_again == 0) {
				std::cout << "The correct number was: " << random_number << "\n";
				return;
			}
		}
		else {
			std::cout << "Your guess is too high.\n";
			std::cout << "Do you want to try again? (y/n):\n ";
			int try_again = yes_or_no_chap_9_x_q1();
			if (try_again == 0) {
				std::cout << "The correct number was: " << random_number << "\n";
				return;
			}

		}
	}
}

void result_message_chap_9_x_q1() {
	std::cout << "Let's Play a Game of Lo! and Hi!\n";
	std::cout << "Enter the minimum Value:\n";
	static int min{ num_inputs_chap_9_x_q1() };
	std::cout << "Enter the maximum Value:\n";
	static int max{ num_inputs_chap_9_x_q1() };
	std::cout << "Enter the number of chances you want:\n";
	static int chances{ num_inputs_chap_9_x_q1() };
	generate_random_number_chap_9_x_q1(min, max, chances);


}