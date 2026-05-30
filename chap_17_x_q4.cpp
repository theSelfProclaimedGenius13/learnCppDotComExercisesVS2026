#include "chap_17_x_q4.h"
#include <iostream>

bool invalid_input() {
	if (!std::cin || (!std::cin.eof() && std::cin.peek() != '\n')) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return true;
	}
	return false;
}

bool player_options() {
	std::cout << "Press 'h' to hit or 's' to stand: ";
	char choice{};
	std::cin >> choice;
	if (invalid_input()) {
		std::cout << "Invalid input.\n";
		return player_options();
	}
	else if (choice == 'h') {
		return true;
	}
	else if (choice == 's'){
		return false;

	}
	else {
		std::cout << "Incorrect Choice.\n";
		return player_options();
	}
}

void dealer_plays(Deck& deck, Player& dealer) {
	while (dealer.score < Settings::dealer_stand_score) {
		auto card = deck.deal_card();
		dealer.score += card.rank_value_chap_17_x_q3();
		std::cout << "Dealer was dealt: " << card << ".  They now have: " << dealer.score << "\n";
	}
}

void player_plays(Deck& deck, Player& player) {
	while (player.score < Settings::bust_score) {
		if (player_options()) {
			auto card = deck.deal_card();
			player.score+= card.rank_value_chap_17_x_q3();
			std::cout << "You were dealt: "<< card << ".  You now have: " << player.score << "\n";
		}
		else {
			break;
		}
	}
}

bool blackjack() {
	Deck deck{};
	deck.shuffle();
	Player dealer{ deck.deal_card().rank_value_chap_17_x_q3() };
	std::cout << "The dealer is showing: " << dealer.score << "\n";
	Player player{ deck.deal_card().rank_value_chap_17_x_q3() };
	std::cout << "You have score: " << player.score << "\n";
	player_plays(deck, player);
	if (player.score >= Settings::bust_score){
		return false;
	}
	else {
		dealer_plays(deck, dealer);
		if ((dealer.score >= Settings::bust_score) || (dealer.score < player.score)) {
			return true;
		}
		else if (dealer.score == player.score) {
			std::cout << "It's a tie! Dealer wins\n";
			return false;
		}
		else {
			return false;
		}
	}
	
}
void result_message_chap_17_x_q4() {
	
	if (blackjack()) {
		std::cout << "Player wins!\n";
	}
	else {
		std::cout << "Dealer wins!\n";
	}
}