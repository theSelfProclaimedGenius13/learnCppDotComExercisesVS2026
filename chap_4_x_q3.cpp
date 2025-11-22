#include <iostream>

double towHeight_chap_4_x_q3() {
	double towHeight;
	std::cin >> towHeight;
	return towHeight;
}

double distance_fallen_chap_4_x_q3(int seconds) {
	const double gravity{9.8};
	return  (gravity * seconds * seconds / 2);
}

void result_message_chap_4_x_q3() {
	std::cout << "Enter the height of the tower in meters: \n";
	double tow_height{towHeight_chap_4_x_q3()};
	std::cout << "Ball Will Start to Fall:\n";
	int a{ 0 };
	while (true) {
		if (distance_fallen_chap_4_x_q3(a) >= tow_height) {
			std::cout << "At "<<a<<" seconds, the ball is on the ground.\n";
			break;
		}
		std::cout << "At "<<a<<" seconds, the ball is at height "<<tow_height-distance_fallen_chap_4_x_q3(a)<<"\n";
		a++;
	}
}