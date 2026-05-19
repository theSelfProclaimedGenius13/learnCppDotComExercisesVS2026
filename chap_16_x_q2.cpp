#include<iostream>
#include <vector>
#include "chap_16_x_q2.h"
#include <cassert>
#include <iterator>


void print_individual_tems_chap_16_x_q2(const std::vector<int>& items) {
	int count{ 0 };
	for (int item : items) {
		if (count == 0) {
			if (item == 1) {
				std::cout << "You have " << item << " health potion\n";

			}
			else {
				std::cout << "You have " << item << " health potions\n";
			}
		}
		else if(count==1) {
			if (item == 1) {
				std::cout << "You have " << item << " torche\n";
			}
			else {
				std::cout << "You have " << item << " torches\n";
			}
		}
		else if (count == 2) {
			if (item == 1) {
				std::cout << "You have " << item << " arrow\n";
			}
			else {
				std::cout << "You have " << item << " arrows\n";
			}
		}
	}
}


int item_total_chap_16_x_q2(const std::vector<int>& items) {
	int count{ 0 };
	for (int item : items) {
		count += item;
	}
	return count;
}

void result_message_chap_16_x_q2() {
	const std::vector<int> items_i{ 1,5,10 };
	assert(std::size(items_i) == Items::max_items);
	print_individual_tems_chap_16_x_q2(items_i);
	std::cout << "You have " <<item_total_chap_16_x_q2(items_i) << " total items\n";
}