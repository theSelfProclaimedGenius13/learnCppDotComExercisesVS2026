#include<vector>
#include<iostream>

template <typename T>
T find_max_chap_16_6_q5(const std::vector<T>& v) {
	T max{};
	std::size_t length{ v.size() };
	if (static_cast<int>(length) == 0) {
		return max;
	}
	max = v[0];
	for (std::size_t i{ 1 }; i < length; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}
void result_message_chap_16_6_q5() {
	std::vector data1{ 84, 92, 76, 81, 56 };
	std::cout << find_max_chap_16_6_q5(data1) << '\n';

	std::vector data2{ -13.0, -26.7, -105.5, -14.8 };
	std::cout << find_max_chap_16_6_q5(data2) << '\n';

	std::vector<int> data3{ };
	std::cout << find_max_chap_16_6_q5(data3) << '\n';
}