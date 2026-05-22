#include<iostream>
#include<string_view>
#include<string>
#include "chap_17_6_q1.h"


std::string input_animal_chap_17_6_q1() {
	std::string animal_name{};
	std::cout << "Enter an animal name: ";
	std::cin >> animal_name;
	if (!std::cin) {
		std::cout << "Invalid Input\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return input_animal_chap_17_6_q1();
	}
	else {
		return animal_name;
	}
}


void print_animal_details_chap_17_6_q1(const std::string& animal_name) {
	bool found{ false };
	for (const auto& animal : Animals::animals_data) {
		if (animal.name == animal_name) {
			std::cout << "A " << animal.name << " has "<<animal.legs<<" legs and says "<<animal.sound<<"\n";
			found = true;
			if (found) break;
		}
	}
	if(!found) std::cout << "Unknown animal\n";
	
	std::cout << "Here is the data for other animals:\n";
	for (const auto& animal : Animals::animals_data) {
		if (animal.name == animal_name) continue;
		std::cout << "A " << animal.name << " has " << animal.legs << " legs and says " << animal.sound << "\n";
	}
}

void result_message_chap_17_6_q1() {
	std::string animal_name = input_animal_chap_17_6_q1();
	print_animal_details_chap_17_6_q1(animal_name);
}