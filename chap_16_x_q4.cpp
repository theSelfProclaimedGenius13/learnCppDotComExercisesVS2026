#include<iostream>
#include<vector>
#include <utility>

template<typename T>
std::pair<std::vector<T>, std::vector<T>> min_max_chap_16_x_q4(const std::vector<T>& v) {
	std::vector<T> min{ v[0],0 };
	std::vector<T> max{ v[0],0};
	int count{ 0 };
	for (const auto& num : v) {
		if (num < min[0]) {
			min[0] = num;
			min[1] = count;
		}
		if (num > max[0]) {
			max[0] = num;
			max[1] = count;
		}
		count++;
	}
	return { min, max };
}
template<typename T>
void print_min_max_chap_16_x_q4(const std::vector<T>& v, const std::pair<std::vector<T>, std::vector<T>>& p) {
	std::cout << "With array ";
	for (const auto& number : v) {
		std::cout << number << " ";
	}
	std::cout << "\n\nThe min element has index " << p.first[1] << " and value " << p.first[0];
	std::cout << "\nThe max element has index " << p.second[1] << " and value " << p.second[0] << "\n\n";
}

template <typename T>
std::vector<T> vector_input_chap_16_x_q4() {
	std::vector<T> v;
	std::cout << "Enter the number in array and press -1 when done :\n";
	T input;
	while (std::cin >> input && input != -1) {
		v.push_back(input);
	}
	return v;
}

void result_message_chap_16_x_q4() {
	const std::vector v1{ vector_input_chap_16_x_q4<int>() };
	if(v1.size()<=0){
		std::cout << "No input provided.\n";
		return;
	}
	const std::pair <std::vector<int>, std::vector<int>> p1 = min_max_chap_16_x_q4(v1);
	print_min_max_chap_16_x_q4(v1, p1);
}