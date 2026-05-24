#pragma once
#include <string_view>
#include <array>
#include <string>
#include "chap_15_x_q1_random.h"

struct Potion {
	std::string_view name{};
	int cost{};
};

struct Inventory {
	std::string_view name{};
	int count{};
};

inline namespace Global_Data {
	static int starting_gold{ (Random::get(80,120)) };
	static constexpr std::array<Potion, 4> potions{ {{"healing", 20},{"mana",30},{"speed", 12},{"invisibility",50}} };
	static std::array<Inventory, 4> inventory{ {{"healing", 0},{"mana",0},{"speed", 0},{"invisibility",0}} };
}
static auto& get_gold_chap_17_x_q2();
int inventory_is_changed_chap_17_x_q2();
constexpr auto& get_potions_chap_17_x_q2();
static auto& get_inventory_chap_17_x_q2();
std::string inp_chap_17_x_q2();
void print_inventory_chap_17_x_q2();
void print_options_chap_17_x_q2();
void print_welcome_result_message_chap_17_x_q2();
void do_all_chap_17_x_q2();
void result_message_chap_17_x_q2();