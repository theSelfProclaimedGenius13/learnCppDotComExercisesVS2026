#include <vector>
#include<iostream>
#include <string_view>
#include "chap_15_x_q1_random.h"
#include <string>
char input_char_chap_16_x_q5() {
	std::cout << "Enter an english alphabet character: \n";
	char c;
	std::cin >> c;
	if (!std::cin) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if (c) {
		return c;
	}
	else {
		std::cout << "Invalid input. Please enter a valid character.\n";
		return input_char_chap_16_x_q5();
	}
}

std::vector<std::string> words_chap_16_x_q5() {
	std::vector<std::string> word_list = { "apple", "banana", "cherry", "date", "elderberry" };
	return word_list;
}

int chances_chap_16_x_q5() {
	std::cout << "Enter how many chances you want: \n";
	int i;
	std::cin >> i;
	if (!std::cin) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if (i) {
		return i;
	}
	else {
		std::cout << "Invalid input. Please enter a valid number.\n";
		return chances_chap_16_x_q5();
	}
}


void c_hangman_chap_16_x_q5() {
	std::cout << "Welcome to C++man (a variant of Hangman).\nTo win : guess the word.To lose : run out of pluses.\n";
	std::string word = words_chap_16_x_q5()[Random::get(0, static_cast<int>(words_chap_16_x_q5().size()) - 1)];
	char guess;
	std::string dashed_word(word.size(), '-');
	int chances = chances_chap_16_x_q5();
	std::string pluses(chances, '+');
	while (chances >= 0 ) {
		if (chances == 0) {
			std::cout << "You lost! The word was: " << word << "\n";
			return;
		}
		std::cout << "The Word: " << dashed_word << "\t";
		std::cout << "Wrong guesses: " << pluses << "\n";
		guess = input_char_chap_16_x_q5();
		bool correct_guess = false;
		for (size_t i = 0; i < word.size(); ++i) {
			if (word[i] == guess) {
				dashed_word[i] = guess;
				correct_guess = true;
			}
			if (dashed_word == word) {
				std::cout << "Congratulations! You've guessed the word: " << word << "\n";
				return;
			}
		}
		if (!correct_guess) {
			pluses.at(chances - 1) = guess;
			chances--;
			std::cout << "Wrong guess! You lost a chance.\n";
		}
		else {
			std::cout << "Correct guess!\n";
		}
	}
}

void result_message_chap_16_x_q5() {
	c_hangman_chap_16_x_q5();
}