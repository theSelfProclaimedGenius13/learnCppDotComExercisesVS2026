#pragma once
#include <string>
#include <string_view>
#include <array>
#include <iostream>
struct Card {
	enum class Suits{ Hearts, Diamonds, Clubs, Spades, Max_Ranks };
	enum class Ranks { Ace, Two , Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack , Queen , King, Max_Ranks };
	Ranks rank{};
	Suits suit{};
	

	constexpr static std::array <Suits, static_cast<size_t>(Suits::Max_Ranks)> all_suits{
		Suits::Hearts, Suits::Diamonds, Suits::Clubs, Suits::Spades
	};
	constexpr static std::array <Ranks, static_cast<size_t>(Ranks::Max_Ranks)> all_ranks{
		Ranks::Ace, Ranks::Two, Ranks::Three, Ranks::Four, Ranks::Five, Ranks::Six, Ranks::Seven, Ranks::Eight, Ranks::Nine, Ranks::Ten, Ranks::Jack, Ranks::Queen, Ranks::King
	};

	int rank_value_chap_17_x_q3() const {
		static constexpr std::array rank_values{ 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
		return rank_values[static_cast<size_t>(rank)];
	}

	friend std::ostream& operator<<(std::ostream& os, const Card& card) {
		static constexpr std::array suits{ 'H', 'D', 'C', 'S' };
		static constexpr std::array ranks{ 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };
		os << ranks[static_cast<size_t>(card.rank)] << suits[static_cast<size_t>(card.suit)];
		return os;
	}

};
std::array <Card, 52> create_deck();
class Deck {
	std::array <Card, 52> m_cards{};
	std::size_t m_card_index{ 0 };
	public:
		Deck(std::array <Card, 52> cards = create_deck()) : m_cards{ cards } {};
		Card deal_card();
		void shuffle();
};

void result_message_chap_17_x_q3();