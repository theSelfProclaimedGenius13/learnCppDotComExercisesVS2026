#include "chap_14_10_q1.h"
#include<iostream>
void print(const Ball& ball) {
	std::cout << "Ball (" << ball.get_color() << ", " << ball.get_radius() << ")\n";
}

void result_message_chap_14_10_q1() {
	Ball blue{ "blue", 10.0 };
	print(blue);

	Ball red{ "red", 12.0 };
	print(red);
}