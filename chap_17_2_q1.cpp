#include<iostream>
#include<array>

void result_message_chap_17_2_q1() {
	std::array s{ 'h', 'e', 'l', 'l', 'o' };
	std::cout << "The length of array is: " << s.size() << "\n";
	std::cout << s[1] << s.at(1) << std::get<1>(s) << "\n";
}