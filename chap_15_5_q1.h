#pragma once
#include <iostream>
template <typename A, typename B, typename C>
class Triad {
	A m_a{};
	B m_b{};
	C m_c{};
public:
	Triad() = default;
	Triad(const A& a, const B& b, const C& c)
		:m_a{ a}, m_b{b}, m_c{ c} {}
	A get_first()const { return m_a; };
	B get_second()const { return m_b; };
	C get_third()const { return m_c; };
	void print_triad() const;
};

template <typename A, typename B, typename C>
void Triad<A, B, C>::print_triad()const {
	std::cout << "[" << m_a << ", " << m_b << ", " << m_c << "]\n";
}
void result_message_chap_15_5_q1();