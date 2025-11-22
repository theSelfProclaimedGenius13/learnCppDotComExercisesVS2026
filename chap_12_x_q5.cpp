#include<iostream>

void sort2_chap_12_x_q5(int& a, int& b) {
    if (a > b) {
        int temp{ a };
        a = b;
        b = temp;
    }
}

void result_message_chap_12_x_q5() {
    int x{ 7 };
    int y{ 5 };

    std::cout << x << ' ' << y << '\n';

    sort2_chap_12_x_q5(x, y);
    std::cout << x << ' ' << y << '\n';

    sort2_chap_12_x_q5(x, y);
    std::cout << x << ' ' << y << '\n';
}