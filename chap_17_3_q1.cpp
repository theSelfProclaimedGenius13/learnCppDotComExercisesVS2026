#include<iostream>
#include<array>

template<typename T, std::size_t N>
void print_array_chap_17_3_q1(const std::array<T, N>& arr) {
    auto length{ arr.size() };
    if (length <= 0) {
        return;
    }
    std::cout << "The array (";
    for (std::size_t i{ 0 }; i < length;i++) {
        if (i == (length-1)) {
            std::cout << arr[i] << ") has length " << length << ".\n";
        }
        else {
            std::cout << arr[i] << ", ";
        }
    }
}


void result_message_chap_17_3_q1() {
    constexpr std::array arr1{ 1, 4, 9, 16 };
    print_array_chap_17_3_q1(arr1);

    constexpr std::array arr2{ 'h', 'e', 'l', 'l', 'o' };
    print_array_chap_17_3_q1(arr2);
}