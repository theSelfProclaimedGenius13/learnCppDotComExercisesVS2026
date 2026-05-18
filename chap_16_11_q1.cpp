#include <iostream>
#include <vector>

void print_vector_stack_chap_16_11_q1(const std::vector<int>& v) {
	std::cout << "\t(Vector Stack: ";
	if (v.empty()) {
		std::cout << "Empty";
	} 
	else {
		for(const auto& elem : v) {
			std::cout << elem << " ";
		}
	}
	std::cout << ")\n";
}

void push_chap_16_11_q1(std::vector<int>& v, int value) {
	v.push_back(value);
	std::cout << "Push " << value ;
	print_vector_stack_chap_16_11_q1(v);
}

void pop_chap_16_11_q1(std::vector<int>& v) {
	v.pop_back();
	std::cout << "Pop ";
	print_vector_stack_chap_16_11_q1(v);
}


void result_message_chap_16_11_q1() {
	std::vector<int> v{};
	print_vector_stack_chap_16_11_q1(v);
	push_chap_16_11_q1(v,1);
	push_chap_16_11_q1(v,2);
	push_chap_16_11_q1(v,3);
	pop_chap_16_11_q1(v);
	push_chap_16_11_q1(v,4);
	pop_chap_16_11_q1(v);
	pop_chap_16_11_q1(v);
	pop_chap_16_11_q1(v);
}