#pragma once
#include<iostream>
struct IntPair {
	int first;
	int second;
	void  print() const {
		std::cout << "Pair (" << first << ", " << second << ")\n";
	}
	bool is_equal(const IntPair& pair) const {
		return ((first == pair.first)&&(second == pair.second));
	}
};
void result_message_chap_14_3_q2();
