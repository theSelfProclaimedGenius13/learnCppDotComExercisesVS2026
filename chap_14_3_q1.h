#pragma once
#include<iostream>
struct IntPair {
	int first;
	int second;
	void  print() const {
		std::cout << "Pair ("<<first<<", "<<second<<")\n";
	}
};
void result_message_chap_14_3_q1();