#include <vector>
#include<iostream>

void print_vector_element_chap_16_4_q1(const auto& v, int i ) {
	if(v.size()>i) {
		std::cout << v[i] << std::endl;
	} else {
		std::cout << "Index out of range" << std::endl;
	}
}

void result_message_chap_16_4_q1() {
	std::vector v1{ 0, 1, 2, 3, 4 };
	print_vector_element_chap_16_4_q1(v1, 2);
	print_vector_element_chap_16_4_q1(v1, 5);

	std::vector v2{ 1.1, 2.2, 3.3 };
	print_vector_element_chap_16_4_q1(v2, 0);
	print_vector_element_chap_16_4_q1(v2, -1);
}