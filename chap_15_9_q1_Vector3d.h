#pragma once
#include<iostream>
#include "chap_15_9_q1_Point3d.h"
class Vector3d
{
private:
	double m_x{};
	double m_y{};
	double m_z{};

public:
	Vector3d(double x, double y, double z);

	void print_chap_15_9_q1() const;
	friend void Point3d::moveByVector(const Vector3d& v);
};