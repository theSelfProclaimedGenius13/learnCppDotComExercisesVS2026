#include<iostream>
#include "chap_17_4_q2.h"
#include <array>


void result_message_chap_17_4_q2() {
	constexpr std::array<Item_chap_17_4_q2,4> items{{{"Sword", 5},{"Dagger", 3},{"Club", 2},{"Spear", 7}}};
	for (const auto& item : items) {
		std::cout << "A " << item.name << " costs " << item.gold << " gold.\n";
	}
}