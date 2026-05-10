#pragma once
#include <iostream>
#include <string>
#include "chap_15_x_q1_random.h"
class Monster_15_x {
public:
	enum  Type {
		dragon,
		goblin,
		ogre,
		orc,
		skeleton,
		troll,
		vampire,
		zombie,
		maxMonsterTypes
	};
private:
	Type m_type{};
	std::string m_name{};
	std::string m_roar{};
	int m_hitPoints{};
public:
	Monster_15_x(Type type, std::string name, std::string roar, int hitPoints)
		: m_type(type), m_name(name), m_roar(roar), m_hitPoints(hitPoints)
	{}
	std::string getTypeString() const {
		switch (m_type) {
		case dragon: return "dragon";
		case goblin: return "goblin";
		case ogre: return "ogre";
		case orc: return "orc";
		case skeleton: return "skeleton";
		case troll: return "troll";
		case vampire: return "vampire";
		case zombie: return "zombie";
		default: return "unknown";
		}
	}
	void print() const {
		if (m_hitPoints <= 0) {
			std::cout << m_name << " the " << getTypeString() << " is dead.\n";
		}
		else {
			std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << "\n";
		}
	}
};
namespace MonsterGenerator {
	inline std::string get_name(int n) {
		switch (n) {
		case 0: return "Rey";
		case 1: return "Randy";
		case 2: return "John";
		case 3: return "Edge";
		case 4: return "Paige";
		case 5: return "Becky";
		case 6: return "Nicky";
		case 7: return "Kane";
		case 8: return "Lilian";
		default: return "Unknown";
		}
	}
	inline std::string get_roar(int n) {
		switch (n) {
		case 0: return "*roar*";
		case 1: return "*growl*";
		case 2: return "*snarl*";
		case 3: return "*hiss*";
		case 5: return "*tiss";
		case 6: return "*mowls";
		case 7: return "*gowls";
		case 8: return "*psss";
		default: return "Unknown";
		}
	}
	inline Monster_15_x generate () {
		return Monster_15_x{ static_cast<Monster_15_x::Type>(Random::get(0,8)), get_name(Random::get(0,8)), get_roar(Random::get(0,8)), Random::get(0,100) };
	}
	
};
void result_message_chap_15_x_q1_main();