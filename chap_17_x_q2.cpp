#include<iostream>
#include "chap_17_x_q2.h"
#include <array>
#include <string_view>
#include <string>
#include <stdexcept>


constexpr auto& get_potions_chap_17_x_q2() {
	return Global_Data::potions;
}

static auto& get_inventory_chap_17_x_q2() {
	
	return Global_Data::inventory;
}

static auto& get_gold_chap_17_x_q2() {
	return Global_Data::starting_gold;
}

int inventory_is_changed_chap_17_x_q2(){
	static int count{ -1 };
	count++;
	if (count>=1) {
		return 1;
	}
	return 0;
}

std::string inp_chap_17_x_q2() {
	std::string inp;
	std::cin >> inp;
	if(!std::cin) {
		std::cerr << "Error: Invalid input. Please try again." << std::endl;
		std::cin.clear(); 
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return inp_chap_17_x_q2(); 
	}
	return inp;
}

void print_inventory_chap_17_x_q2() {
	if (inventory_is_changed_chap_17_x_q2() == 0) {
		std::cout << "Your inventory is empty.\n";
		
	}
	else {
		std::cout << "Your inventory contains:\n";
		for (const auto& item : get_inventory_chap_17_x_q2()) {
			if (item.count > 0) {
				std::cout << item.count << "x potion of " << item.name << "\n";
			}
		}
	}
	std::cout << "You left with " << get_gold_chap_17_x_q2() << " gold.\n";
	
}

void print_options_chap_17_x_q2() {
	int count{ 0 };
	for (const auto& potion: get_potions_chap_17_x_q2()) {
		std::cout << count++ << ") " << potion.name << " potion costs " << potion.cost << " gold.\n"; 
	}
	std::cout << "Enter the number of the potion you'd like to buy, or 'q' to quit:\t";
}


void print_welcome_result_message_chap_17_x_q2() {
	std::cout << "Welcome to Roscoe's potion emporium!\nEnter your name :\t";
	std::string name{};
	std::cin >> name;
	std::cout << "Hello, " << name << "! ";
	std::cout << "You have " << get_gold_chap_17_x_q2() << " gold.\n";
}

void do_all_chap_17_x_q2() {
	std::cout << "Here is our selection for today:\n";
	while (true) {
		print_options_chap_17_x_q2();
		auto choice {inp_chap_17_x_q2()};
		std::cout << "\n";
		if (choice == "q") {
			std::cout << "Thanks for shopping at Roscoe's potion emporium! Goodbye!\n";
			print_inventory_chap_17_x_q2();
			return;
		}
		else {
			try {
				int choice_int = std::stoi(choice);
				if (((choice_int >= 0) && (choice_int < static_cast<int>(std::ssize(get_potions_chap_17_x_q2()))))) {

					if ((get_gold_chap_17_x_q2()) < ((get_potions_chap_17_x_q2())[choice_int].cost)) {
						std::cout << "You cannot afford that potion.\nYou have " << (get_gold_chap_17_x_q2()) << " gold remaining.\n";
					}
					else {
						(get_gold_chap_17_x_q2()) -= (get_potions_chap_17_x_q2())[choice_int].cost;
						(get_inventory_chap_17_x_q2())[choice_int].count += 1;
						std::cout << "You have purchased a " << (get_potions_chap_17_x_q2())[choice_int].name << " potion for " << (get_potions_chap_17_x_q2())[choice_int].cost << " gold.\n\nYou have " << (get_gold_chap_17_x_q2()) << " gold remaining.\n";
						inventory_is_changed_chap_17_x_q2();
						continue;
					}
				}
				else {
					std::cout << "Invalid choice. Please enter a valid potion number or 'q' to quit.\n";
					std::cout << "You have " << (get_gold_chap_17_x_q2()) << " gold remaining.\n";
				}
			}
			catch (const std::invalid_argument& ) {
				std::cout << "Invalid choice. Please enter a valid potion number or 'q' to quit.\n";
				std::cout << "You have " << (get_gold_chap_17_x_q2()) << " gold remaining.\n";
				continue;
			}
			catch (const std::out_of_range& ) {
				std::cout << "Invalid choice. Please enter a valid potion number or 'q' to quit.\n";
				std::cout << "You have " << (get_gold_chap_17_x_q2()) << " gold remaining.\n";
				continue;
			}
			
			
		}
	}
}

void result_message_chap_17_x_q2() {
	print_welcome_result_message_chap_17_x_q2();
	do_all_chap_17_x_q2();
}