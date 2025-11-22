#include <iostream>

namespace Constants_chap_8_x_q1 {
	constexpr double gravity{ 9.8 };
}

double towHeight_chap_8_x_q1() {
	double towHeight;
	std::cin >> towHeight;
	return towHeight;
}

double distance_fallen_chap_8_x_q1(int seconds) {
	return  (Constants_chap_8_x_q1::gravity * seconds * seconds / 2);
}

void result_message_chap_8_x_q1() {
	std::cout << "Enter the height of the tower in meters: \n";
	double tow_height{ towHeight_chap_8_x_q1() };
	std::cout << "Ball Will Start to Fall:\n";
	int a{ 0 };
	while (true) {
		if (distance_fallen_chap_8_x_q1(a) >= tow_height) {
			std::cout << "At " << a << " seconds, the ball is on the ground.\n";
			break;
		}
		std::cout << "At " << a << " seconds, the ball is at height " << tow_height - distance_fallen_chap_8_x_q1(a) << "\n";
		a++;
	}
}