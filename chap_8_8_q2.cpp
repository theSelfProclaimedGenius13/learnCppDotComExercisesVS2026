#include<iostream>

void result_message_chap_8_8_q2() {
	char ascii_char = 97;
	while (ascii_char<=122) {
		std::cout << ascii_char << " has a ascii value of:\t" << static_cast<int>(ascii_char) << "\n";
		++ascii_char;
	}
}