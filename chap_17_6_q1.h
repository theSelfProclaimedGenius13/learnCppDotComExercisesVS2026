#pragma once
#include <string_view>
#include <array>
#include<string>
struct Animal_Data {
	std::string_view name{};
	int legs{};
	std::string_view sound{};
};
namespace Animals {
	enum Animals {
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		max_animals
	};
	using namespace std::string_view_literals;
	constexpr std::array<Animal_Data, max_animals> animals_data{{
		{"Chicken"sv, 2, "Cluck"sv},
		{"Dog"sv, 4, "Woof"sv},
		{"Cat"sv, 4, "Meow"sv},
		{"Elephant"sv, 4, "Trumpet"sv},
		{"Duck"sv, 2, "Quack"sv},
		{"Snake"sv, 0, "Hiss"sv}
	} };
	static_assert(animals_data.size() == max_animals);
}


std::string input_animal_chap_17_6_q1();
void print_animal_details_chap_17_6_q1(const std::string& animal_name);
void result_message_chap_17_6_q1();
