#include<iostream>
#include "chap_17_4_q1.h"
#include <array>


void result_message_chap_17_4_q1() {
	std::array items{
		Item_chap_17_4_q1{"Sword", 5},
		Item_chap_17_4_q1{"Dagger", 3},
		Item_chap_17_4_q1{"Club", 2},
		Item_chap_17_4_q1{"Spear", 7}
	};
	for (const auto& item : items) {
		std::cout << "A " << item.name << " costs " << item.gold << " gold.\n";
	}
}