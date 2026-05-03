#pragma once
#include<string>
#include<string_view>
class Ball {
	std::string m_color{"No_Color"};
	double m_radius{0.0};
public:
	Ball(std::string_view color, double radius )
		:m_color{ color }, m_radius{ radius }
	{
		;
	}
	const std::string& get_color() const {
		return m_color;
	}
	const double& get_radius() const {
		return m_radius;
	}
};

void print(const Ball& ball);
void result_message_chap_14_10_q1();