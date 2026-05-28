#include <iostream>
#include "chap_17_x_q3.h"
#include <algorithm>
#include "chap_15_x_q1_random.h"
#include <array>

std::array <Card, 52> create_deck() {
	std::array<Card, 52> deck{};
	size_t index = 0;
	for (auto suit : Card::all_suits)
		for (auto rank : Card::all_ranks)
			deck[index++] = Card{ rank, suit };
	return deck;
}
Card Deck::deal_card() {
	return m_cards[m_card_index++];
}
void Deck::shuffle() {
	std::shuffle(m_cards.begin(), m_cards.end(), Random::mt );
}


void result_message_chap_17_x_q3() {
    Deck deck{};
    std::cout << deck.deal_card() << ' ' << deck.deal_card() << ' ' << deck.deal_card() << '\n';

    deck.shuffle();
    std::cout << deck.deal_card() << ' ' << deck.deal_card() << ' ' << deck.deal_card() << '\n';

}