#include "chap_17_x_q4.h"
#include <iostream>
#include <vector>
#include <limits>

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
		if ((card.rank_value_chap_17_x_q3()+dealer.score >= Settings::bust_score) && (card.rank_value_chap_17_x_q3() == 11)) {
			dealer.score += 1;
		}
		else {
			dealer.score += card.rank_value_chap_17_x_q3();
		}
		
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

int blackjack() {
	Deck deck{};
	deck.shuffle();
	auto dealer_card{ deck.deal_card() };
	Player dealer{ dealer_card.rank_value_chap_17_x_q3() };
	std::cout << "The dealer is showing: "<< dealer_card <<"  ("<< dealer.score << ")\n";
	std::vector<Card> player_cards { deck.deal_card(), deck.deal_card()};
	Player player{ player_cards[0].rank_value_chap_17_x_q3()+ player_cards[1].rank_value_chap_17_x_q3() };
	if (player.score >= 21) {
		player.score -= 10;
		std::cout << "You are showing: " << player_cards[0] << " " << player_cards[1] << "  (" << player.score << ")\n";
	}
	else {
		std::cout << "You are showing: " << player_cards[0] << " " << player_cards[1] << "  (" << player.score << ")\n";
	}

	player_plays(deck, player);
	if (player.score >= Settings::bust_score){
		return 0;
	}
	else {
		dealer_plays(deck, dealer);
		if (player.score == dealer.score) {
			return -1;
		}
		else if ((dealer.score >= Settings::bust_score) || (dealer.score < player.score)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	
}
void result_message_chap_17_x_q4() {
	int result { blackjack() };
	if (result==-1) {
		std::cout << "It's a draw!\n";
	}
	else if(result==0) {
		std::cout << "Dealer wins!\n";
	}
	else {
		std::cout << "Player Wins!\n";
	}
}