#include<iostream>
#include<array>
#include <utility>
template<typename T, std::size_t N>
void print_array_chap_18_1_q2(const std::array<T, N>& arr) {
	for (std::size_t i{ 0 }; i < N; i++) {
		std::cout << arr[i] << "  ";
	}
	std::cout << "\n";
}
template<typename T, std::size_t N>
void selection_sort_chap_18_1_q2(std::array<T, N>& arr) {
	for (std::ptrdiff_t i{ 0 }; i < N - 1; i++) {
		auto max_index{ i };
		for (std::ptrdiff_t j{ i + 1 }; j < N; j++) {
			if (arr[j] > arr[max_index]) {
				max_index = j;
			}
		}
		std::swap(arr[i], arr[max_index]);
		print_array_chap_18_1_q2(arr);
	}
}
void result_message_chap_18_1_q2() {
	std::array arr{ 30,60,20,50,40,10 };
	selection_sort_chap_18_1_q2(arr);
}