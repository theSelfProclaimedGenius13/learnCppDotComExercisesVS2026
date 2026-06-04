#include<iostream>
#include <algorithm>
#include <string>

std::size_t get_length_chap_19_2_q1() {
	int length{};
	std::cout << "How many names would ou like to enter? \n";
	std::cin >> length;
	return length;
}

void get_names_chap_19_2_q1(std::string arr[], std::size_t length) {
	for (std::size_t i{}; i < length; ++i) {
		std::cout << "Enter name #" << i + 1 << ":  ";
		std::getline(std::cin >> std::ws, arr[i]);
		std::cout << "\n";
	}
}

void print_names_chap_19_2_q1(std::string arr[], std::size_t length) {
	for (std::size_t i{0}; i < length; ++i) {
		std::cout << arr[i] << "\n";
	}
}

void result_message_chap_19_2_q1() {
	std::size_t length{ get_length_chap_19_2_q1() };
	std::string* arr{ new std::string[length] };
	get_names_chap_19_2_q1(arr, length);
	std::sort(arr, arr + length);
	std::cout << "Here is your sorted list:\n";
	print_names_chap_19_2_q1(arr, length);
	delete[] arr;
}