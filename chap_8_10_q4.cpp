#include<iostream>
void simpleFizzBuzz(int n) {
	bool printed = false;
	if (n%3==0) {
		std::cout << "Fizz";
		printed = true;
	}
	if (n%5==0){
		std::cout << "Buzz";
		printed = true;
	}
	if (n %7 == 0) {
		std::cout << "Pop";
		printed = true;
	}
	if(!printed){
		std::cout << n;
	}
	std::cout << "\n";
}

void loopedFizzBuzz(int n) {
	for (int i = 1; i <= n; ++i) {
		simpleFizzBuzz(i);
	}
}
void result_message_chap_8_10_q4() {
	int num;
	std::cout << "Enter a positive integer: ";
	std::cin >> num;
	loopedFizzBuzz(num);
}