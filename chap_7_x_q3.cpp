#include<iostream>
#include"chap_7_x_q3.h"

int accumulator_chap_7_x_q3(int value)
{
	static int sum{};
	sum += value;
	return sum;
}

int result_message_chap_7_x_q3()
{
    std::cout << accumulator_chap_7_x_q3(4) << '\n'; // prints 4
    std::cout << accumulator_chap_7_x_q3(3) << '\n'; // prints 7
    std::cout << accumulator_chap_7_x_q3(2) << '\n'; // prints 9
    std::cout << accumulator_chap_7_x_q3(1) << '\n'; // prints 10

    return 0;
}