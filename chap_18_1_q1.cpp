#include<iostream>
#include<array>
#include <utility>
template<typename T, std::size_t N>
void print_array(const std::array<T,N>& arr)  {
	for (std::size_t i{ 0 }; i < N; i++) {
		std::cout << arr[i] << "  ";
	}
	std::cout << "\n";
}
template<typename T, std::size_t N>
void selection_sort(std::array<T, N>& arr) {
	for (std::ptrdiff_t i{ 0 }; i < N - 1; i++) {
		auto min_index{ i };
		for (std::ptrdiff_t j{ i + 1 }; j < N; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		std::swap(arr[i], arr[min_index]);
		print_array(arr);
	}
}
void result_message_chap_18_1_q1() {
	std::array arr{ 30,60,20,50,40,10 };
	selection_sort(arr);
}