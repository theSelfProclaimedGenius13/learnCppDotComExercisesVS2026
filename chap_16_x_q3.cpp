#include<iostream>
#include<vector>
#include <utility>

template<typename T>
std::pair<std::vector<T>, std::vector<T>> min_max_chap_16_x_q3(const std::vector<T>& v) {
	
	if (v.size() <= 0) {
		return { {0,0},{0,0} };
	}
	
	else {
		int count{ 0 };
		std::vector<T> min{ v[0],v[0] };
		std::vector<T> max{ v[0],v[0] };
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
}
template<typename T>
void print_min_max_chap_16_x_q3(const std::vector<T>& v, const std::pair<std::vector<T>, std::vector<T>>& p) {
	std::cout << "With array ";
	for (const auto& number : v) {
		std::cout << number<<"\t";
	}
	std::cout << "\n\nThe min element has index " << p.first[1] << " and value " << p.first[0] ;
	std::cout << "\nThe max element has index " << p.second[1] << " and value " << p.second[0] << "\n\n";
}

void result_message_chap_16_x_q3() {
	const std::vector<int> v1{ 3, 8, 2, 5, 7, 8, 3 };
	const std::pair <std::vector<int>, std::vector<int>> p1 = min_max_chap_16_x_q3(v1);
	print_min_max_chap_16_x_q3(v1, p1);
	const std::vector<double> v2{ 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
	const std::pair <std::vector<double>, std::vector<double>> p2 = min_max_chap_16_x_q3(v2);
	print_min_max_chap_16_x_q3(v2, p2);
}