#include<iostream>
#include "chap_5_7_q1.h"

std::string get_full_name_chap_5_7_q1 () {
	std::string full_name{};
	std::getline(std::cin >> std::ws, full_name);
	return full_name;
};

int get_age_chap_5_7_q1() {
	int age{};
	std::cin >> age;
	return age;
};

int sum_of_age_and_number_of_characters_in_name_chap_5_7_q1(int age,int char_count) {
	return int (age + char_count);
};

void result_message_chap_5_7_q1() {
	std::cout << "Enter your full name: \n";
	std::string full_name{ get_full_name_chap_5_7_q1() };
	std::cout << "Enter your age: \n";
	int age{ get_age_chap_5_7_q1() };
	int char_count{ static_cast<int>(full_name.length()) };
	int sum_of_chars{ sum_of_age_and_number_of_characters_in_name_chap_5_7_q1(age, char_count) };
	std::cout << "Your name has " << char_count << " characters and your age is " << age << ".\n";
	std::cout << "The sum of the number of characters in your name and your age is " << sum_of_chars << ".\n";
};