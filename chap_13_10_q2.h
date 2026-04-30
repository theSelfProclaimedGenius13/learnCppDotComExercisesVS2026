#pragma once
struct Fraction {
	int nume{};
	int deno{};
};
const Fraction get_fraction_from_user_chap_13_10_q2();
const Fraction multiply_fractions_chap_13_10_q2(const Fraction& f1,const Fraction& f2);
void print_fraction_chap_13_10_q2(const Fraction& f);
void result_message_chap_13_10_q2();
