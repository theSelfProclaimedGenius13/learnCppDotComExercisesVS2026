#include<iostream>
#include "chap_13_10_q2.h"

const Fraction get_fraction_from_user_chap_13_10_q2() {
	Fraction f{};
	std::cout << "Enter a fraction: \n";
	char slash{};
	std::cin >> f.nume >> slash >> f.deno;
	return f;
}

const Fraction multiply_fractions_chap_13_10_q2(const Fraction& f1, const Fraction& f2) {
	const Fraction result{ f1.nume * f2.nume,f1.deno * f2.deno };
	return result;
}

void print_fraction_chap_13_10_q2(const Fraction& f) {
	std::cout << f.nume << "\n" <<"----" << "\n"<< f.deno << "\n";
}
void result_message_chap_13_10_q2() {
	while (true) {
		std::cout << "Enter 0 to exit or any other key to continue: ";
		char choice{};
		std::cin >> choice;
		if (choice == '0') {
			std::cout << "Bye Bye";
			return;
		}
		const Fraction f1{ get_fraction_from_user_chap_13_10_q2() };
		const Fraction f2{ get_fraction_from_user_chap_13_10_q2() };
		const  Fraction result{ multiply_fractions_chap_13_10_q2(f1, f2) };
		print_fraction_chap_13_10_q2(result);
	}
}