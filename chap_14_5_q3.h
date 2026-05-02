#pragma once
#include<iostream>
class Point3d {
	int m_x{};
	int m_y{};
	int m_z{};
public:
	void set_values(int x, int y, int z) {
		m_x = x;
		m_y = y;
		m_z = z;
	}
	void print() const {
		std::cout << "<" << m_x << "," << m_y << "," << m_z << ">\n";
	}
	bool is_equal(const Point3d& point)const {
		return ((m_x == point.m_x) && (m_y == point.m_y) && (m_z == point.m_z));
	}
};
void result_message_chap_14_5_q3();
