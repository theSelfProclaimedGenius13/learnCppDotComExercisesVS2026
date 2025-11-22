#include "chap_7_x_q2.h"
#include <iostream>

int result_message_chap_7_x_q2()
{
	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;


	if (students > Constants_chap_7_x_q2::max_class_size)
		std::cout << "There are too many students in this class";
	else
		std::cout << "This class isn't too large";

	return 0;
}