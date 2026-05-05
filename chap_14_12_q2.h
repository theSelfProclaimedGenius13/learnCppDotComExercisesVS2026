#pragma once
#include<string>
#include <iostream>
class Ball {
	std::string m_color{"black"};
	double m_radius{10.0};
public:
	Ball(double radius)
		:Ball{ "black", radius } {}
	Ball(std::string color = "black",double radius =10.0 )
		:m_color{ color }, m_radius{ radius }
	{
		print_ball_chap_14_12_q2();
	}
	void print_ball_chap_14_12_q2() const {
		std::cout << "Ball (" << m_color << ", " << m_radius << ")\n";
	}

};
void result_message_chap_14_12_q2();
