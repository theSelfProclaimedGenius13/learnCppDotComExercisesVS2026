#pragma once
#include<iostream>
class Fraction {
	double nume{ 0.0 };
	double deno{ 1.0 };
public:
	void set_fraction(double n, double d) {
		nume = n;
		deno = d;
	}
	void get_fraction() {
		int n{};
		std::cout << "Enter the numerator: ";
		std::cin >> n;
		int d{};
		std::cout << "Enter the denominator: ";
		std::cin >> d;
		set_fraction(n, d);
	}
	Fraction multiply(const Fraction& f) {
		Fraction result;
		result.set_fraction(nume * f.nume, deno * f.deno);
		return result;
	}
	void print_fraction() const {
		std::cout << nume << "/" << deno << "\n";
	}
};
void result_message_chap_14_x_q2();