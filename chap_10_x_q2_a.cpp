#include <iostream>

using Degrees = double;
using Radians = double;

namespace constants_chap_10_x_q2_a
{
    constexpr double pi{ 3.14159 };
}

double convertToRadians(Degrees degrees)
{
    return Radians(degrees * constants_chap_10_x_q2_a::pi / 180);
}

void result_message_chap_10_x_q2_a()
{
    std::cout << "Enter a number of degrees: ";
    Degrees degrees{};
    std::cin >> degrees;

    Radians radians{ convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

}