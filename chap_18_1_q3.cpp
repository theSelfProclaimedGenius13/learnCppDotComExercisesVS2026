#include<iostream>
#include<array>
#include<utility>

template<typename T, std::size_t N>
void print_array_chap_18_1_q3(const std::array<T, N>& arr) {
	for (std::size_t i{ 0 }; i < N; ++i) {
		std::cout << arr[i] << "  ";
	}
	std::cout << "\n";
}

template<typename T, std::size_t N>
void bubble_sort_chap_18_1_q3(std::array<T, N>& arr) {
	for (std::size_t i{ 0 }; i < N - 1; i++) {
		for (std::size_t j{ 0 }; j < N - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
			}
		}
		print_array_chap_18_1_q3(arr);
	}
}

void result_message_chap_18_1_q3() {
	std::array arr{ 6,3,2,9,7,1,5,4,8 };
	bubble_sort_chap_18_1_q3(arr);
}