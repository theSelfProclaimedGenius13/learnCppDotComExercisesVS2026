#pragma once
#include <vector>
namespace Items {
	enum Item_Type {
		healt_potion,
		torche,
		arrow,
		max_items
	};
}
void print_individual_tems_chap_16_x_q2(const std::vector<int>& items);
int item_total_chap_16_x_q2(const std::vector<int>& items);
void result_message_chap_16_x_q2();