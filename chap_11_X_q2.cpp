#include<iostream>
#include "chap_11_x_q2.h"

auto sub_chap_11_x_q2(auto i, auto j){
	return (i - j);
}
void result_message_chap_11_x_q2() {
	std::cout << add_chap_11_x_q2(2, 3) << '\n';
	std::cout << add_chap_11_x_q2(1.2, 3.4) << '\n';
	std::cout << mul_chap_11_x_q2(2, 3) << '\n';
	std::cout << mul_chap_11_x_q2(1.2, 3) << '\n';
	std::cout << sub_chap_11_x_q2(3, 2) << '\n';
	std::cout << sub_chap_11_x_q2(3.5, 2) << '\n';
	std::cout << sub_chap_11_x_q2(4, 1.5) << '\n';
}
