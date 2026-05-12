#include <iostream>
#include <vector>

void result_message_chap_16_3_q1() {
	std::vector <char> cv{ 'h', 'e', 'l','l','o' };
	std::cout << "The array has " << cv.size() << " elements.\n";
	std::cout << cv[1] << cv.at(1)<<"\n";
}