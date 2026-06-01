#include<iostream>
#include<array>
#include<utility>

template<typename T, std::size_t N>
void print_array_chap_18_1_q4(const std::array<T, N>& arr) {
	for (std::size_t i{ 0 }; i < N; ++i) {
		std::cout << arr[i] << "  ";
	}
	std::cout << "\n";
}

template<typename T, std::size_t N>
void bubble_sort_chap_18_1_q4(std::array<T, N>& arr) {
	bool swapped{ true };
	int swapping_completed_at{ 0 };
	for (std::size_t i{ 0 }; i < N - 1; i++) {
		swapped = false;
		for (std::size_t j{ 0 }; j < N - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) {
			swapping_completed_at = static_cast<int>(i)+1;
			std::cout << "Early Termination at iteration: " << swapping_completed_at << "\n";
			break;
		}
	}
}

void result_message_chap_18_1_q4() {
	std::array arr{ 6,3,2,9,7,1,5,4,8 };
	bubble_sort_chap_18_1_q4(arr);
	print_array_chap_18_1_q4(arr);
}