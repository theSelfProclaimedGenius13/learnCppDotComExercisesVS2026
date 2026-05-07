#include "chap_14_x_q2.h"
#include <iostream>

void result_message_chap_14_x_q2() {
    Fraction f1{};
    f1.get_fraction();
    Fraction f2{};
    f2.get_fraction();
    Fraction result{ f1.multiply(f2) };
    std::cout << "Your fractions multiplied together: \n";
	result.print_fraction();

}