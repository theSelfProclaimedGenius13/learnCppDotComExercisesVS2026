#include "chap_14_x_q1.h"

void result_message_chap_14_x_q1() {
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distance_to(second) << '\n';
}