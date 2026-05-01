#include<iostream>
#include<string_view>
#include "chap_13_x_q1.h"


constexpr std::string_view monsterType_to_string_chap_13_x_q1(const Monster::MonsterType& monsterType){
	switch (monsterType) {
	case Monster::Ogre:
		return "Ogre";
	case Monster::Dragon:
		return "Dragon";
	case Monster::Orc:
		return "Orc";
	case Monster::Giant_Spider:
		return "Giant Spider";
	case Monster::Slime:
		return "Slime";
	default:
		return "Unknown";
	}
}

Monster::MonsterType const get_monster_type_chap_13_x_q1() {
	std::cout << "Enter the monster type (0: Ogre, 1: Dragon, 2: Orc, 3: Giant Spider, 4: Slime): \n";
	int type;
	std::cin >> type;
	return static_cast<Monster::MonsterType>(type);
}

const Monster get_monster_info_chap_13_x_q1() {
	Monster monster;
	monster.monsterType = get_monster_type_chap_13_x_q1();
	std::cout << "Enter the monster's name: \n";
	std::cin >> monster.monsterName;
	std::cout << "Enter the monster's health: \n";
	std::cin >> monster.monsterHealth;
	return monster;
}
void print_monster_info_chap_13_x_q1(const Monster& monster) {
	std::cout << "This " << monsterType_to_string_chap_13_x_q1(monster.monsterType) << " is named " << monster.monsterName << " and has health " << monster.monsterHealth << "\n";
}

void result_message_chap_13_x_q1() {
	Monster monster1 = get_monster_info_chap_13_x_q1();
	Monster monster2 = get_monster_info_chap_13_x_q1();
	print_monster_info_chap_13_x_q1(monster1);
	print_monster_info_chap_13_x_q1(monster2);
}