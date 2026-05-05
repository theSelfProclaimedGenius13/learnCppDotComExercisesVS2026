#pragma once
#include<string>
#include<string_view>
#include <iostream>
class Ball {
	std::string m_color{ "black" };
	double m_radius{ 10.0 };
public:
	Ball(){
		print_ball_chap_14_12_q1();
	}
	Ball(double radius)
		:m_radius{ radius } {
		print_ball_chap_14_12_q1();
	}
	Ball(std::string color)
		:m_color{ color }{
		print_ball_chap_14_12_q1();
	}
	Ball(std::string color, double radius)
		:m_color{ color }, m_radius{ radius } {
		print_ball_chap_14_12_q1();
	}
	//const std::string& get_color() const { return m_color; }
	//const double& get_radius() const { return m_radius; }
	void print_ball_chap_14_12_q1() const {
		std::cout << "Ball (" << m_color << ", " << m_radius << ")\n";
	}
	
};
void result_message_chap_14_12_q1();