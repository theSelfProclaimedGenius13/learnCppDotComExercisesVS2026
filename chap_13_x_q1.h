#pragma once
#include<string_view>
#include<string>
struct Monster {
	enum MonsterType {
		Ogre,
		Dragon,
		Orc,
		Giant_Spider,
		Slime,
	};
	MonsterType monsterType{};
	std::string monsterName{};
	double monsterHealth{};
};
constexpr std::string_view monsterType_to_string_chap_13_x_q1(const Monster::MonsterType& monsterType);
const Monster::MonsterType get_monster_type_chap_13_x_q1();
const Monster  get_monster_info_chap_13_x_q1();
void print_monster_info_chap_13_x_q1(const Monster& monster);
void result_message_chap_13_x_q1();