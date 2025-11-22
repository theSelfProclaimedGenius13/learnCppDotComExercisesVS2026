#include<iostream>
#include<string>


const int get_age_chap_5_x_q4() {
	int age;
	std::cin >> age;
	return age;
}

std::string get_name_chap_5_x_q4() {
	std::string name;
	std::getline(std::cin >> std::ws, name);
	return name;
}

void print_age_comparison_chap_5_x_q4(const std::string name1,const int age1, const std::string name2, const int age2) {
	if (age1 > age2) {
		std::cout << name1 << "(" << age1 << ")" << " is older than " << name2 << "(" << age2 << ")" << ".\n";
	}
	else if (age1 < age2) {
		std::cout << name2 << "(" << age2 << ")" << " is older than " << name1 << "(" << age1 << ")" << ".\n";
	}
	else {
		std::cout << name1 << "(" << age1 << ")" << " And " << name2 << "(" << age2 << ")" << " Are of Same Age.\n";
	}
}

void result_message_chap_5_x_q4() {
	std::cout << "Enter Name of Person #1:\t";
	std::string name1 = get_name_chap_5_x_q4();
	std::cout << "Enter Age of " << name1 << ":\t";
	const int age1 = get_age_chap_5_x_q4();
	std::cout << "Enter Name of Person #2:\t";
	std::string name2 = get_name_chap_5_x_q4();
	std::cout << "Enter Age of " << name2 << ":\t";
	const int age2 = get_age_chap_5_x_q4();
	print_age_comparison_chap_5_x_q4(name1, age1, name2, age2);
}
