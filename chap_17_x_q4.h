#pragma once
#include <iostream>
#include "chap_17_x_q3.h"
struct Player {
	int score{};
};
namespace Settings {
	constexpr int bust_score{ 21 };
	constexpr int dealer_stand_score{ 17 };
}
bool invalid_input();
bool player_options();
void dealer_plays(Deck& deck, Player& player);
void player_plays(Deck& deck, Player& player);
bool blackjack();
void result_message_chap_17_x_q4();