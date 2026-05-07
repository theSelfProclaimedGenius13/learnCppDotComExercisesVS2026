#pragma once
#include<iostream>
#include <cmath>
class Point2d {
	double m_x{ 0.0 };
	double m_y{ 0.0 };
public:
	Point2d () = default;
	Point2d(double x, double y) : m_x{ x }, m_y{ y } {}
	double get_x() const { return m_x; }
	double get_y() const { return m_y; }
	void print()const {
		std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
	}
	double distance_to(const Point2d& other) const {
		double dx{ m_x - other.m_x };
		double dy{ m_y - other.m_y };
		return std::sqrt(dx * dx + dy * dy);
	}
};
void result_message_chap_14_x_q1();