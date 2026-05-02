#include "chap_14_5_q3.h"

void result_message_chap_14_5_q3() {
	Point3d point1{};
	point1.set_values(1, 2, 3);

	Point3d point2{};
	point2.set_values(1, 2, 3);

	std::cout << "point 1 and point 2 are" << (point1.is_equal(point2) ? "" : " not") << " equal\n";

	Point3d point3{};
	point3.set_values(3, 4, 5);

	std::cout << "point 1 and point 3 are" << (point1.is_equal(point3) ? "" : " not") << " equal\n";
}